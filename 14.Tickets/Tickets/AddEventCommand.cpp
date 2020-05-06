#include "AddEventCommand.h"
#include "Hall.h"
#include "Event.h"

std::string AddEventCommand::execute(const std::vector<std::string>& parameters)
{
	std::string date = parameters[1]; // skips 0 since its the command's name

	int hallId = std::stoi(parameters[2]);

	std::string name = parameters[3]; // event name
	
	//find hall with that name
	for (size_t i = 0; i < this->halls.size(); i++)
	{
		if (this->halls[i]->getId() == hallId)
		{
			this->halls[i]->addEvent(date, name);
		}
	}

	return Constants::Success;
}

std::string AddEventCommand::toString()
{
	return Constants::AddEventCommandName;
}
