#include "ExitCommand.h"

ExitCommand::ExitCommand(Store* store) : store(store)
{ }

std::string ExitCommand::execute(const std::vector<std::string>&)
{
	return Constants::ExitResponse;
}

std::string ExitCommand::toString()
{
	return Constants::ExitCommandName;
}
