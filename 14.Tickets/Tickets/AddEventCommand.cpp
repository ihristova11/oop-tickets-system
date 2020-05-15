#include "AddEventCommand.h"
#include "Hall.h"
#include "Event.h"

AddEventCommand::AddEventCommand(Store* store, FileReader* reader) :
	store(store), reader(reader)
{ }

std::string AddEventCommand::execute(const std::vector<std::string>& parameters)
{
	// validate parameters len
	std::string date = parameters[1];
	int hallId = std::stoi(parameters[2]);
	std::string name = parameters[3];

	if (Validator::isValidDate(date) && this->store->hallExists(hallId) 
		&& this->store->hallFree(date, hallId))
	{
		Hall hall = this->store->getHallWithId(hallId);
		Event newEvent = Event(name, date, hall);
		this->store->events.push_back(newEvent);

		return Constants::Success;
	}

	return Constants::AddEventError;
}

std::string AddEventCommand::toString()
{
	return Constants::AddEventCommandName;
}