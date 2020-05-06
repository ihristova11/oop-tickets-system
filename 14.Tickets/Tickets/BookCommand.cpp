#include "BookCommand.h"
#include "Constants.h"

std::string BookCommand::execute(std::vector<std::string> parameters)
{
	return Constants::Success;
}

std::string BookCommand::toString()
{
	return Constants::BookCommandName;
}
