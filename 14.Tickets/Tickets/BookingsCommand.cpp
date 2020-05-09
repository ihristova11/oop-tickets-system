#include "BookingsCommand.h"

BookingsCommand::BookingsCommand(Store* store) : store(store)
{ }

std::string BookingsCommand::execute(const std::vector<std::string>& parameters)
{
	// validator
	//if (parameters.size() == 3)
	//{
	//	std::string date = parameters[1];
	//	std::string name = parameters[2];

	//	for (size_t i = 0; i < this->store->tickets.size(); i++)
	//	{
	//		if (this->store->tickets[i].type == TicketType::RESERVED
	//			&& this->store->tickets[i].event->date == date 
	//			&& this->store->tickets[i].event->name == name)
	//		{
	//			// print the ticket
	//			this->store->tickets[i].print(std::cout);
	//		}
	//	}
	//}
	return Constants::Success;
}

std::string BookingsCommand::toString()
{
	return Constants::BookingsCommandName;
}
