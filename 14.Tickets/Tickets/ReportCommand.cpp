#include "ReportCommand.h"

ReportCommand::ReportCommand(const Receiver& receiver) : receiver(receiver)
{ }

std::string ReportCommand::execute(const std::vector<std::string>& parameters)
{
	std::string from = parameters[1];
	std::string to = parameters[2];
	int hallId = std::stoi(parameters[3]);

	for (size_t i = 0; i < this->receiver.tickets.size(); i++)
	{
		//if(this->receiver.tickets[i]->code) // get event, get hall
	}

	return Constants::Success;
}

std::string ReportCommand::toString()
{
	return Constants::ReportCommandName;
}
