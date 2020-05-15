#include "CheckCommand.h"

CheckCommand::CheckCommand(Store* store)
{
	ICommand::store = store;
}

std::string CheckCommand::execute(const std::vector<std::string>& parameters)
{
	if (Validator::isMinParametersCount(parameters.size(), 1))
	{
		std::string ticketCode = parameters[1]; // code
		if (this->store->getTicketByCode(ticketCode) == nullptr)
		{
			return Constants::CheckNotFound; // cannot find ticket 
		}
	}
	else
	{
		return Constants::InvalidParameters;
	}

	return Constants::CheckFound;
}

std::string CheckCommand::toString()
{
	return Constants::CheckCommandName;
}
