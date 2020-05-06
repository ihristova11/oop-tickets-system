#include "BookCommand.h"

std::string BookCommand::execute(const std::vector<std::string>& parameters)
{
	std::string date = parameters[1];
	std::string eventName = parameters[2];
	for (size_t i = 0; i < halls.size(); i++)
	{
		for (size_t j = 0; j < halls[i]->events.size(); j++)
		{
			if (halls[i]->events[j]->name == eventName && halls[i]->events[j]->date == date)
			{
				// get info for tickets
			}
		}
	}
	return Constants::Success;
}

std::string BookCommand::toString()
{
	return Constants::BookCommandName;
}
