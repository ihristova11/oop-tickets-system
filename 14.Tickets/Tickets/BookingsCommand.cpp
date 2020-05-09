#include "BookingsCommand.h"

BookingsCommand::BookingsCommand(Receiver* receiver) : receiver(receiver)
{ }

std::string BookingsCommand::execute(const std::vector<std::string>& parameters)
{
	// validator
	//if (parameters.size() == 3)
	//{
	//	std::string date = parameters[1];
	//	std::string name = parameters[2];

	//	for (size_t i = 0; i < this->receiver->tickets.size(); i++)
	//	{
	//		if (this->receiver->tickets[i].type == TicketType::RESERVED
	//			&& this->receiver->tickets[i].event->date == date 
	//			&& this->receiver->tickets[i].event->name == name)
	//		{
	//			// print the ticket
	//			this->receiver->tickets[i].print(std::cout);
	//		}
	//	}
	//}
	return Constants::Success;
}

std::string BookingsCommand::toString()
{
	return Constants::BookingsCommandName;
}
