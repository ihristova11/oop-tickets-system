#include "PopularEventsCommand.h"

PopularEventsCommand::PopularEventsCommand(Receiver* receiver) 
	: receiver(receiver)
{ }

std::string PopularEventsCommand::execute(const std::vector<std::string>&)
{
	return Constants::Success;
}

std::string PopularEventsCommand::toString()
{
	return Constants::PopularEventsCommandName;
}
