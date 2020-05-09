#include "ReportCommand.h"

ReportCommand::ReportCommand(Receiver* receiver) : receiver(receiver)
{ }

std::string ReportCommand::execute(const std::vector<std::string>& parameters)
{
	std::string from = parameters[1];
	std::string to = parameters[2];

	//if (parameters.size() == 4) // validation
	//{
	//	int hallId = std::stoi(parameters[3]); // custom parameter
	//	for (size_t i = 0; i < this->receiver->tickets.size(); i++)
	//	{
	//		if (this->receiver->tickets[i].event->hall.getId() == hallId
	//			&& this->receiver->tickets[i].event->date >= from
	//			&& this->receiver->tickets[i].event->date < to)
	//		{
	//			this->receiver->tickets[i].print(std::cout);
	//		}
	//	}
	//}
	//else if (parameters.size() == 3) // constant
	//{
	//	for (size_t i = 0; i < this->receiver->tickets.size(); i++)
	//	{
	//		if (this->receiver->tickets[i].event->date >= from
	//			&& this->receiver->tickets[i].event->date < to)
	//		{
	//			this->receiver->tickets[i].print(std::cout);
	//		}
	//	}
	//}

	return Constants::Success;
}

std::string ReportCommand::toString()
{
	return Constants::ReportCommandName;
}
