#include "CheckCommand.h"

CheckCommand::CheckCommand(const Receiver& receiver) : receiver(receiver)
{ }

std::string CheckCommand::execute(const std::vector<std::string>& parameters)
{
	std::string ticketCode = parameters[1]; // code

	for (size_t i = 0; i < this->receiver.tickets.size(); i++)
	{
		if (this->receiver.tickets[i].code == ticketCode)
		{
			// todo: check if valid
			// - check for event
			// - check for hall
			// - check for seat / row
		}
	}

	return Constants::Success;
}

std::string CheckCommand::toString()
{
	return Constants::CheckCommandName;
}
