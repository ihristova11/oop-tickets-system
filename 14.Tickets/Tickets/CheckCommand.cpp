#include "CheckCommand.h"

CheckCommand::CheckCommand(Store* store, CommandValidator* validator) 
	: store(store), validator(validator)
{ }

std::string CheckCommand::execute(const std::vector<std::string>& parameters)
{
	std::string ticketCode = parameters[1]; // code
	if (this->store->getTicketByCode(ticketCode) == nullptr)
	{
		return Constants::CheckNotFound; // cannot find ticket 
	}

	return Constants::CheckFound;
}

std::string CheckCommand::toString()
{
	return Constants::CheckCommandName;
}
