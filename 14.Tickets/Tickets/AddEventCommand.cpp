#include "AddEventCommand.h"

std::string AddEventCommand::execute(std::vector<std::string> parameters)
{
	std::string date = parameters[0]; // may need an object for the date
	std::string hall = parameters[1];
	std::string name = parameters[2];

	return Constants::Success;
}

std::string AddEventCommand::toString()
{
	return Constants::AddEventCommandName;
}
