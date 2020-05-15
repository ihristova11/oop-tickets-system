#include "BookingsCommand.h"

BookingsCommand::BookingsCommand(Store* store)
{
	ICommand::store = store;
}

std::string BookingsCommand::execute(const std::vector<std::string>& parameters)
{
	//validator
	int paramSize = parameters.size();
	if (Validator::isMinParametersCount(paramSize, 2))
	{
		if (parameters.size() == 3)
		{
			std::string date = parameters[1];
			std::string name = parameters[2];
			Event* found = this->store->getEvent(date, name);
			for (Ticket ticket : found->tickets)
			{
				if (ticket.type == TicketType::RESERVED)
				{
					ticket.print(std::cout);
				}
			}
		}
		else if (parameters.size() == 1)
		{
			for (Event e : this->store->events)
			{
				for (Ticket ticket : e.tickets)
				{
					if (ticket.type == TicketType::RESERVED)
					{
						ticket.print(std::cout);
					}
				}
			}
		}
		else if (parameters.size() == 2) // check for name
		{
			std::string input = parameters[1];
			// check for name
			if (!Validator::isValidDate(input))
			{
				for (Event e : this->store->events)
				{
					if (e.name == input)
					{
						for (Ticket ticket : e.tickets)
						{
							if (ticket.type == TicketType::RESERVED)
							{
								ticket.print(std::cout);
							}
						}
					}
				}
			}
			else // valid date? - check for date
			{
				for (Event e : this->store->events)
				{
					if (e.date == input)
					{
						for (Ticket ticket: e.tickets)
						{
							if (ticket.type == TicketType::RESERVED)
							{
								ticket.print(std::cout);
							}
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
