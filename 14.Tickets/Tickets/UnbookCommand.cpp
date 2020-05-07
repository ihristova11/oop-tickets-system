#include "UnbookCommand.h"

UnbookCommand::UnbookCommand(Receiver* receiver) : receiver(receiver)
{ }

std::string UnbookCommand::execute(const std::vector<std::string>& parameters)
{
	int row = std::stoi(parameters[1]);
	int seat = std::stoi(parameters[2]);
	std::string date = parameters[3];
	std::string name = parameters[4];

	// get ticket
	Ticket* found = this->receiver->getTicket(row, seat, date, name);
	if (found == nullptr)
	{
		throw "No such ticket found!"; // to be constants
		// should return error message
	}

	// unbook
	found->type = TicketType::NONPURCHASED;

	return Constants::Success;
}

std::string UnbookCommand::toString()
{
	return Constants::UnbookCommandName;
}
