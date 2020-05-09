#include "BookingsCommand.h"

BookingsCommand::BookingsCommand(Store* store, CommandValidator* validator) 
	: store(store), validator(validator)
{ }

std::string BookingsCommand::execute(const std::vector<std::string>& parameters)
{
	 //validator
	// refactor duplicate code
	if (parameters.size() == 3)
	{
		std::string date = parameters[1];
		std::string name = parameters[2];
		Event* found = this->store->getEvent(date, name);
		for (size_t i = 0; i < found->tickets.size(); i++)
		{
			if (found->tickets[i].type == TicketType::RESERVED)
			{
				found->tickets[i].print(std::cout);
			}
		}
	}
	else if (parameters.size() == 1)
	{
		for (size_t i = 0; i < this->store->events.size(); i++)
		{
			for (size_t j = 0; j < this->store->events[i].tickets.size(); j++)
			{
				if (this->store->events[i].tickets[j].type == TicketType::RESERVED)
				{
					this->store->events[i].tickets[j].print(std::cout);
				}
			}
		}
	}
	else if (parameters.size() == 2)
	{
		std::string input = parameters[1];
		// check for name
		if (!validator->isValidDate(input))
		{
			for (size_t i = 0; i < this->store->events.size(); i++)
			{
				if (this->store->events[i].name == input)
				{
					for (size_t j = 0; j < this->store->events[i].tickets.size(); j++)
					{
						if (this->store->events[i].tickets[j].type == TicketType::RESERVED)
						{
							this->store->events[i].tickets[j].print(std::cout);
						}
					}
				}
			}
		}
		else // valid date? - check for date
		{
			for (size_t i = 0; i < this->store->events.size(); i++)
			{
				if (this->store->events[i].date == input)
				{
					for (size_t j = 0; j < this->store->events[i].tickets.size(); j++)
					{
						if (this->store->events[i].tickets[j].type == TicketType::RESERVED)
						{
							this->store->events[i].tickets[j].print(std::cout);
						}
					}
				}
			}
		}
	}

	return Constants::Success;
}

std::string BookingsCommand::toString()
{
	return Constants::BookingsCommandName;
}
