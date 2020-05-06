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
		this->receiver.events.push_back(new Event(name, date, Hall(hallId)));
		//if (this->halls[i]->getId() == hallId)
		//{
		//	// check if no event at that time
		//	//this->halls[i]->addEvent(date, name);
		//	this->receiver.halls[i]->addEvent(date, name);
		//}
		//else
		//{
		//	// print message for no such hall | update flag or result string
		//}
	}

	return Constants::Success;
}

std::string AddEventCommand::toString()
{
	return Constants::AddEventCommandName;
}
