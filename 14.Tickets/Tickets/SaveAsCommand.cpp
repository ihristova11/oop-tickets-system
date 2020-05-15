#include "SaveAsCommand.h"

SaveAsCommand::SaveAsCommand(Store* store, FileWriter* writer) : writer(writer)
{
	ICommand::store = store;
}

std::string SaveAsCommand::execute(const std::vector<std::string>& parameters)
{
	//todo: validate number of parameters
	std::string fileName = parameters[1];

	//validate filename
	if (Validator::isValidInputFile(fileName))
	{
		this->writer->write(this->writer->lastFile, this->store->events);
	}
	else
	{
		return Constants::InvalidFileName;
	}
	return Constants::Success;
}

std::string SaveAsCommand::toString()
{
	return Constants::SaveAsCommandName;
}
