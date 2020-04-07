#include "Engine.h"
#include <string>

void Engine::start()
{
	while (true)
	{
		std::string commandString; // read the command here

		if (commandString == this->TerminationCommand) // tolower() should be used
		{
			// todo: implement it! 
			break;
		}

		this->processCommand(commandString);
	}
}

CommandParser Engine::getParser() const
{
	return this->parser;
}

void Engine::processCommand(std::string commandAsString)
{
	if (commandAsString.empty())
		throw "Command cannot be empty!";

	//https://stackoverflow.com/questions/582331/is-there-a-way-to-instantiate-objects-from-a-string-holding-their-class-name
	std::string command = this->parser.parseCommand(commandAsString); // should return command type
	std::vector<std::string> parameters = this->parser.parseParameters(commandAsString);

	//std::string executionResult = command.execute(); 
	// todo: << executionResult
}
