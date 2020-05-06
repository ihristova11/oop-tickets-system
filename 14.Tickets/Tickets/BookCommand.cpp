#include "BookCommand.h"
#include "Constants.h"

void BookCommand::execute(std::vector<std::string> parameters)
{
}

std::string BookCommand::toString()
{
	return Constants::BookCommandName;
}
