#include "ReportCommand.h"

ReportCommand::ReportCommand(Store* store)
{
	ICommand::store = store;
}

std::string ReportCommand::execute(const std::vector<std::string>& parameters)
{
	std::string from = parameters[1];
	std::string to = parameters[2];

	//if (parameters.size() == 4) // validation
	//{
	//	int hallId = std::stoi(parameters[3]); // custom parameter
	//	for (size_t i = 0; i < this->store->tickets.size(); i++)
	//	{
	//		if (this->store->tickets[i].event->hall.getId() == hallId
	//			&& this->store->tickets[i].event->date >= from
	//			&& this->store->tickets[i].event->date < to)
	//		{
	//			this->store->tickets[i].print(std::cout);
	//		}
	//	}
	//}
	//else if (parameters.size() == 3) // constant
	//{
	//	for (size_t i = 0; i < this->store->tickets.size(); i++)
	//	{
	//		if (this->store->tickets[i].event->date >= from
	//			&& this->store->tickets[i].event->date < to)
	//		{
	//			this->store->tickets[i].print(std::cout);
	//		}
	//	}
	//}

	return Constants::Success;
}

std::string ReportCommand::toString()
{
	return Constants::ReportCommandName;
}
