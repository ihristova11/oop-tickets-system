#include "HelpCommand.h"

std::string HelpCommand::execute(const std::vector<std::string>&)
{
	return Constants::Success;
}

std::string HelpCommand::toString()
{
	return Constants::HelpCommandName;
}
