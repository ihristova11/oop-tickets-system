#include "AddEventCommand.h"
#include "Hall.h"
#include "Event.h"

std::string AddEventCommand::execute(const std::vector<std::string>& parameters)
{
	std::string date = parameters[1]; // skips 0 since its the command's name

	int hallId = std::stoi(parameters[2]);

	// should have validator for commands

	std::string name = parameters[3]; // event name

	//find hall with that name

	// check for event at that time and hall
	this->receiver.events.push_back(new Event(name, date, Hall(hallId))); // todo: refactor


	return Constants::Success;
}

std::string AddEventCommand::toString()
{
	return Constants::AddEventCommandName;
}
