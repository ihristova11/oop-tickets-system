#include "CheckCommand.h"

CheckCommand::CheckCommand(Receiver* receiver) : receiver(receiver)
{ }

std::string CheckCommand::execute(const std::vector<std::string>& parameters)
{
	std::string ticketCode = parameters[1]; // code

	if (this->receiver->checkCode(ticketCode))
	{
		return Constants::Success;

	}

	return Constants::Error;
}

std::string CheckCommand::toString()
{
	return Constants::CheckCommandName;
}
