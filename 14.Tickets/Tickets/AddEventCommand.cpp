#include "AddEventCommand.h"
#include "Hall.h"
#include "Event.h"

AddEventCommand::AddEventCommand(Receiver* receiver, FileReader* reader, 
	CommandValidator* validator) :
	receiver(receiver), reader(reader), validator(validator)
{ }

std::string AddEventCommand::execute(const std::vector<std::string>& parameters)
{
	std::string date = parameters[1];
	int hallId = std::stoi(parameters[2]);
	std::string name = parameters[3];

	if (validator->isValidDate(date) && this->hallExists(hallId) && hallFree(date, hallId))
	{
		Hall hall = this->receiver->getHallWithId(hallId);
		Event newEvent = Event(name, date, hall);
		this->receiver->events.push_back(newEvent);

		return Constants::Success;
	}

	return Constants::AddEventError;
}

std::string AddEventCommand::toString()
{
	return Constants::AddEventCommandName;
}

bool AddEventCommand::hallExists(const int& hallId)
{
	int len = this->receiver->halls.size();
	for (size_t i = 0; i < len; i++)
	{
		if (this->receiver->halls[i].id == hallId)
		{
			return true;
		}
	}
	return false;
}

bool AddEventCommand::hallFree(const std::string& date, const int& hallId)
{	
	for (size_t i = 0; i < this->receiver->events.size(); i++)
	{
		if (this->receiver->events[i].date == date && this->receiver->events[i].hall.id == hallId)
		{
			return false;
		}
	}
	return true;
}
