#include "Engine.h"
#include <string>
#include "CommandType.h"

void Engine::start()
{
	// void Seed();

	while (true)
	{
		std::string commandString; // read the command here

		if (commandString == "exit") // tolower() should be used, enum to be used
		{
			// todo: implement it! write message to the console
			break;
		}

		//this->processCommand(commandString);
	}
}

const ICommandParser* Engine::getParser() const
{
	return this->parser;
}

void Engine::processCommand(std::string commandAsString)
{
	if (commandAsString.empty())
		throw "Command cannot be empty!";
	

	//https://stackoverflow.com/questions/582331/is-there-a-way-to-instantiate-objects-from-a-string-holding-their-class-name
	//auto command = this->parser.parseCommand(commandAsString); // todo: should return command type ICommand
	// todo: should be in a function
	std::string commandName = (this->parser)->split(commandAsString, ' ')[0];





	// todo: test it with values with spaces
	std::vector<std::string> parameters = (this->parser)->parseParameters(commandAsString); 

	//std::string executionResult = command.execute(); 
	// todo: << executionResult
}

