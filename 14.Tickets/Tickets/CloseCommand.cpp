#include "CloseCommand.h"

CloseCommand::CloseCommand(Store* store)
{
	ICommand::store = store;
}

std::string CloseCommand::execute(const std::vector<std::string>& parameters)
{
	// no parameters to validate
	// delete only the events and tickets in the store

	store->events.clear();
	store->tickets.clear();

	return Constants::CloseSuccess;
}

std::string CloseCommand::toString()
{
	return Constants::CloseCommandName;
}
