#include "ExitCommand.h"

ExitCommand::ExitCommand(Receiver* receiver) : receiver(receiver)
{ }

std::string ExitCommand::execute(const std::vector<std::string>&)
{
	return Constants::ExitResponse;
}

std::string ExitCommand::toString()
{
	return Constants::ExitCommandName;
}
