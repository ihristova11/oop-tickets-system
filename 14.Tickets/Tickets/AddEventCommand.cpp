#include "AddEventCommand.h"
#include "Hall.h"
#include "Event.h"

AddEventCommand::AddEventCommand(const Receiver& receiver) : receiver(receiver) 
// should be in base class? receiver?
{ }

std::string AddEventCommand::execute(const std::vector<std::string>& parameters)
{
	std::string date = parameters[1];
	int hallId = std::stoi(parameters[2]);
	std::string eventName = parameters[3];

	Hall* hall = this->receiver.getHallWithId(hallId);

	if (hall == nullptr)
	{
		// hall was not found
		throw Constants::NoHall; // part of command validation
		return Constants::Error;
	}
	else
	{
		if (this->receiver.getEvent(date, eventName) == nullptr)
		{
			// no such event at that time so we can create a new event
			this->receiver.addEvent(date, eventName, hallId);
		}
		else
		{
			return Constants::Error;
		}
	}

	return Constants::Success;
}

std::string AddEventCommand::toString()
{
	return Constants::AddEventCommandName;
}
