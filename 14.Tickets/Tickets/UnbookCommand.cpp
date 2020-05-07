#include "UnbookCommand.h"

UnbookCommand::UnbookCommand(const Receiver& receiver) : receiver(receiver)
{ }

std::string UnbookCommand::execute(const std::vector<std::string>& parameters)
{
	return Constants::Success;
}

std::string UnbookCommand::toString()
{
	return Constants::UnbookCommandName;
}
