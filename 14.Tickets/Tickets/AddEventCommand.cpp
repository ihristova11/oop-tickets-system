#include "AddEventCommand.h"
#include "Hall.h"
#include "Event.h"

AddEventCommand::AddEventCommand(Store* store, FileReader* reader) :
	reader(reader)
{
	ICommand::store = store;
}

std::string AddEventCommand::execute(const std::vector<std::string>& parameters)
{
	if (Validator::isValidParametersCount(4, parameters.size()))
	{
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
	}
	else
	{
		return Constants::InvalidParameters;
	}

	return Constants::AddEventError;
}

std::string AddEventCommand::toString()
{
	return Constants::AddEventCommandName;
}