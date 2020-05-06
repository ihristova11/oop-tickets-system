#include "BookCommand.h"

std::string BookCommand::execute(const std::vector<std::string>& parameters)
{
	return Constants::Success;
}

std::string BookCommand::toString()
{
	return Constants::BookCommandName;
}
