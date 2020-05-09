#include "OpenCommand.h"
#include <fstream> // may update this later

OpenCommand::OpenCommand(Receiver* receiver) : receiver(receiver)
{ }

std::string OpenCommand::execute(const std::vector<std::string>& parameters)
{
	std::string fileName = parameters[1]; //.txt files only

	// open the file 
	// if file is created and opened the program can continue 
	// if not .. sorry we can't move forward

	

	return Constants::Success;
}

std::string OpenCommand::toString()
{
	return Constants::OpenCommandName;
}
