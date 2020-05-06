#include "FreeSeatsCommand.h"

std::string FreeSeatsCommand::execute(const std::vector<std::string>& parameters)
{
	return Constants::Success;
}

std::string FreeSeatsCommand::toString()
{
	return Constants::FreeSeatsCommandName;
}
