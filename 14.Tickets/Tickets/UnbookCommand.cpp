#include "UnbookCommand.h"

UnbookCommand::UnbookCommand(Receiver* receiver, CommandValidator* validator)
	: receiver(receiver), validator(validator)
{ }

std::string UnbookCommand::execute(const std::vector<std::string>& parameters)
{
	// validate parameters
	// update iterator names
	int row = std::stoi(parameters[1]);
	int seat = std::stoi(parameters[2]);
	std::string date = parameters[3];
	std::string name = parameters[4];

	if (validator->isValidDate(date) && this->getEvent(date, name) != nullptr
		&& this->getTicketInd(this->getEvent(date, name)->tickets,
			date, name, row, seat) != -1)
	{
		//remove from events->tickets
		std::vector<Ticket>::iterator begin = this->getEvent(date, name)->tickets.begin();
		this->getEvent(date, name)->tickets
			.erase(begin + this->getTicketInd(this->getEvent(date, name)->tickets, date, name, row, seat));

		// remove from tickets
		std::vector<Ticket>::iterator beg = this->receiver->tickets.begin();
		this->receiver->tickets.erase(beg +
			this->getTicketInd(this->receiver->tickets, date, name, row, seat));

		return Constants::Success;
	}
	return Constants::UnbookError;
}

std::string UnbookCommand::toString()
{
	return Constants::UnbookCommandName;
}

Event* UnbookCommand::getEvent(const std::string& date, const std::string& name)
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

int UnbookCommand::getTicketInd(std::vector<Ticket>& store, const std::string& date,
	const std::string& name, const int& row, const int& seat)
{
	int len = store.size();
	for (size_t i = 0; i < len; i++)
	{
		if (store[i].seat == seat
			&& store[i].row == row)
		{
			return i;
		}
	}
	return -1;
}
