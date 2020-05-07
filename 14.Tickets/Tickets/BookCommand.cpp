#include "BookCommand.h"

BookCommand::BookCommand(Receiver* receiver) : receiver(receiver)
{ }

std::string BookCommand::execute(const std::vector<std::string>& parameters)
{
	std::string date = parameters[1];
	std::string eventName = parameters[2];
	
	for (size_t i = 0; i < this->receiver->events.size(); i++)
	{
		if (this->receiver->events[i].name == eventName
			&& this->receiver->events[i].date == date)
		{
			// todo: implement booking
			//check if ticket is reserved
			// buy the ticket
		}
	}
	return Constants::Success;
}

std::string BookCommand::toString()
{
	return Constants::BookCommandName;
}
