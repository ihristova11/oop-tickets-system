#include "BookCommand.h"

BookCommand::BookCommand(Store* store, CommandValidator* validator)
	: store(store), validator(validator)
{ }

std::string BookCommand::execute(const std::vector<std::string>& parameters)
{
	// validate parameters
	int row = std::stoi(parameters[1]);
	int seat = std::stoi(parameters[2]);
	std::string date = parameters[3];
	std::string name = parameters[4];
	std::string note = parameters[5];

	if (validator->isValidDate(date) && this->store->eventExists(date, name) 
		&& this->store->isAvailableSeat(date, name, row, seat))
	{
		this->store->getEvent(date, name)->tickets
			.push_back(Ticket(row, seat, TicketType::RESERVED, note));
		this->store->tickets.push_back(Ticket(row, seat, TicketType::RESERVED, note));
		return Constants::Success;
	}

	return Constants::SeatNotAvailable;
}

std::string BookCommand::toString()
{
	return Constants::BookCommandName;
}