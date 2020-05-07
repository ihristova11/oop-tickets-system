#include "FreeSeatsCommand.h"

FreeSeatsCommand::FreeSeatsCommand(Receiver* receiver) : receiver(receiver)
{ }

std::string FreeSeatsCommand::execute(const std::vector<std::string>& parameters)
{
	return Constants::Success;
}

std::string FreeSeatsCommand::toString()
{
	return Constants::FreeSeatsCommandName;
}
