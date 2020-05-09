#include "PopularEventsCommand.h"

PopularEventsCommand::PopularEventsCommand(Store* store) 
	: store(store)
{ }

std::string PopularEventsCommand::execute(const std::vector<std::string>&)
{
	return Constants::Success;
}

std::string PopularEventsCommand::toString()
{
	return Constants::PopularEventsCommandName;
}
