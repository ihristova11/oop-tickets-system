#include "UnbookCommand.h"

std::string UnbookCommand::execute(const std::vector<std::string>& parameters)
{
	return Constants::Success;
}

std::string UnbookCommand::toString()
{
	return Constants::UnbookCommandName;
}
