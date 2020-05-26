#include "BookCommand.h"

BookCommand::BookCommand(Store* store)
{
	ICommand::store = store;
}

std::string BookCommand::execute(const std::vector<std::string>& parameters)
{
	int paramSize = parameters.size();
	if (Validator::hasParameters(paramSize) && Validator::isValidParametersCount(6, paramSize))
	{
		int row = std::stoi(parameters[1]);
		int seat = std::stoi(parameters[2]);
		std::string date = parameters[3];
		std::string name = parameters[4];
		std::string note = parameters[5];

		if (Validator::isValidDate(date) && this->store->eventExists(date, name)
			&& this->store->isAvailableSeat(date, name, row, seat))
		{
			Event* found = this->store->getEvent(date, name);
			found->tickets
				.push_back(Ticket(row, seat, found->hall.getId(), found->date, TicketType::RESERVED, note));
			this->store->tickets.push_back(Ticket(row, seat,
				found->hall.getId(), found->date, TicketType::RESERVED, note));
			return Constants::Success;
		}
	}

	return Constants::SeatNotAvailable;
}

std::string BookCommand::toString()
{
	return Constants::BookCommandName;
}