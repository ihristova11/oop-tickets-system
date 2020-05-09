#include "CheckCommand.h"

CheckCommand::CheckCommand(Store* store) : store(store)
{ }

std::string CheckCommand::execute(const std::vector<std::string>& parameters)
{
	std::string ticketCode = parameters[1]; // code


	return Constants::Error;
}

std::string CheckCommand::toString()
{
	return Constants::CheckCommandName;
}
