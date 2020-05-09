#include "BookCommand.h"

BookCommand::BookCommand(Receiver* receiver, CommandValidator* validator)
	: receiver(receiver), validator(validator)
{ }

std::string BookCommand::execute(const std::vector<std::string>& parameters)
{
	// validate parameters
	int row = std::stoi(parameters[1]);
	int seat = std::stoi(parameters[2]);
	std::string date = parameters[3];
	std::string name = parameters[4];
	std::string note = parameters[5];

	if (validator->isValidDate(date) && this->eventExists(date, name) 
		&& this->isAvailableSeat(date, name, row, seat))
	{
		this->getEvent(date, name)->tickets
			.push_back(Ticket(row, seat, TicketType::RESERVED, note));
		this->receiver->tickets.push_back(Ticket(row, seat, TicketType::RESERVED, note));
		return Constants::Success;
	}

	return Constants::SeatNotAvailable;
}

std::string BookCommand::toString()
{
	return Constants::BookCommandName;
}

bool BookCommand::eventExists(const std::string& date, const std::string& name)
{
	return this->getEvent(date, name) != nullptr;
}

bool BookCommand::isAvailableSeat(const std::string& date, const std::string& name, 
	const int& row, const int& seat)
{
	Event* found = this->getEvent(date, name);
	if (found == nullptr) return false;
	for (size_t i = 0; i < found->tickets.size(); i++)
	{
		if (found->tickets[i].row == row && found->tickets[i].seat == seat)
		{
			return false;
		}
	}
	return true;
}

Event* BookCommand::getEvent(const std::string& date, const std::string& name)
{
	Event* found = nullptr;

	for (size_t i = 0; i < this->receiver->events.size(); i++)
	{
		if (this->receiver->events[i].date == date
			&& this->receiver->events[i].name == name)
		{
			found = &(this->receiver->events[i]);
			break;
		}
	}

	return found;
}
