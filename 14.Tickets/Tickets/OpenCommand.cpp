#include "OpenCommand.h"

OpenCommand::OpenCommand(Receiver* receiver, FileReader* reader)
	: receiver(receiver), reader(reader)
{ }

std::string OpenCommand::execute(const std::vector<std::string>& parameters)
{
	std::string fileName = parameters[1]; //.txt files only

	// check if everything is ok
	this->reader->loadFile(fileName, this->receiver->events);

	return Constants::Success;
}

std::string OpenCommand::toString()
{
	return Constants::OpenCommandName;
}
