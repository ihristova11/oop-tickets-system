#include "BookingsCommand.h"

std::string BookingsCommand::execute(std::vector<std::string> parameters)
{
	return Constants::Success;
}

std::string BookingsCommand::toString()
{
	return Constants::BookingsCommandName;
}
