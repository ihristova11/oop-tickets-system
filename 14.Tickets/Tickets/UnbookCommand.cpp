#include "UnbookCommand.h"
#include "Constants.h"

std::string UnbookCommand::execute(std::vector<std::string> parameters)
{
	return Constants::Success;
}

std::string UnbookCommand::toString()
{
	return Constants::UnbookCommandName;
}
