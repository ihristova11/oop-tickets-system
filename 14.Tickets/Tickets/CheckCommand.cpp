#include "CheckCommand.h"

std::string CheckCommand::execute(std::vector<std::string> parameters)
{
	return Constants::Success;
}

std::string CheckCommand::toString()
{
	return Constants::CheckCommandName;
}
