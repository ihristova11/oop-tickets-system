#include "ExitCommand.h"

std::string ExitCommand::execute(const std::vector<std::string>&)
{
	return Constants::Success;
}

std::string ExitCommand::toString()
{
	return Constants::ExitCommandName;
}
