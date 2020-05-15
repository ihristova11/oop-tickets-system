#include "SaveCommand.h"

SaveCommand::SaveCommand(Store* store, FileWriter* writer)
{
	ICommand::store = store;
	this->writer = writer;
}

std::string SaveCommand::execute(const std::vector<std::string>& parameters)
{
	// no parameters here
	this->writer->write(this->writer->lastFile, store->events);

	return Constants::Success;
}

std::string SaveCommand::toString()
{
	return Constants::SaveCommandName;
}
