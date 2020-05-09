#include "BuyCommand.h"

BuyCommand::BuyCommand(Store* store, CommandValidator* validator)
	: store(store), validator(validator)
{ }

std::string BuyCommand::execute(const std::vector<std::string>& parameters)
{
	// validate row, seat!
	int row = std::stoi(parameters[1]);
	int seat = std::stoi(parameters[2]);
	std::string date = parameters[3];
	std::string name = parameters[4];

	if (validator->isValidDate(date) && this->store->eventExists(date, name))
	{
		int ind = this->store->getTicketInd(this->store->tickets, date, name, row, seat);
		if (ind != -1)
		{
			// change state only
			this->store->tickets[ind].type = TicketType::PURCHASED;
			int eInd = this->store->getTicketInd(this->store->getEvent(date, name)->tickets, date, name, row, seat);
			this->store->getEvent(date, name)->tickets[eInd].type = TicketType::PURCHASED;
		}
		else
		{
			Event* found = this->store->getEvent(date, name);
			// add new
			found->tickets
				.push_back(Ticket(row, seat, found->hall.id, found->date,
					TicketType::PURCHASED));
			this->store->tickets.push_back(Ticket(row, seat, found->hall.id, found->date,
				TicketType::PURCHASED));
		}
	}

	return Constants::Success;
}

std::string BuyCommand::toString()
{
	return Constants::BuyCommandName;
}
