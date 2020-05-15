#include "FreeSeatsCommand.h"

FreeSeatsCommand::FreeSeatsCommand(Store* store)
{
	ICommand::store = store;
}

std::string FreeSeatsCommand::execute(const std::vector<std::string>& parameters)
{

	return Constants::Success;
}

std::string FreeSeatsCommand::toString()
{
	return Constants::FreeSeatsCommandName;
}
