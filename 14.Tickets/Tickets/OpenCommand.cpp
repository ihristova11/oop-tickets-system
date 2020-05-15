#include "OpenCommand.h"

OpenCommand::OpenCommand(Store* store, FileReader* reader, FileWriter* writer) 
	: reader(reader), writer(writer)
{
	ICommand::store = store;
}

std::string OpenCommand::execute(const std::vector<std::string>& parameters)
{
	std::string fileName = parameters[1];
	if (Validator::isValidInputFile(fileName)) //.txt files only
	{
		this->reader->read(fileName, this->store->events);
		this->addTickets();
		this->updateLastFile(fileName);
		return Constants::Success;
	}
	else
	{
		return Constants::Error; // update with useful error message
	}
}

std::string OpenCommand::toString()
{
	return Constants::OpenCommandName;
}

void OpenCommand::updateLastFile(const std::string& file)
{
	this->writer->lastFile = file;
}

void OpenCommand::addTickets()
{
	int n = this->store->events.size();
	for (size_t i = 0; i < n; i++)
	{
		int t = this->store->events[i].tickets.size();
		if (t > 0)
		{
			for (size_t j = 0; j < t; j++)
			{
				this->store->tickets.push_back(this->store->events[i].tickets[j]);
			}
		}
	}
}
