#include "AddEventCommand.h"
#include "Constants.h"

void AddEventCommand::execute(std::vector<std::string> parameters)
{
	std::string date = parameters[0]; // may need an object for the date
	std::string hall = parameters[1];
	std::string name = parameters[2];


}

std::string AddEventCommand::toString()
{
	return Constants::AddEventCommandName;
}
