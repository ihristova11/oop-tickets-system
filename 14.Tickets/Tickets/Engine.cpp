#include "Engine.h"

#include <string>
#include <iostream>
#include "CommandParser.h"
Engine::Engine()
{
	this->parser = new CommandParser();
}

Engine::~Engine()
{
	delete this->parser;
}

void Engine::start()
{
	// try catch ?
	void seed(); // todo: seed file with halls and events

	while (true)
	{
		std::string commandString;
		// read the command here
		std::getline(std::cin, commandString);

		this->processCommand(commandString);

		if (commandString == "exit") // tolower()
		{
			// todo: only write message to the console since the command has executed successfully
			break;
		}
	}
}

void Engine::processCommand(std::string commandAsString)
{
	if (commandAsString.empty())
		throw "Command cannot be empty!"; // should have a test for this

	ICommand* command = (this->parser)->parseCommand(commandAsString);

	// todo: test it with values with spaces
	// parse parameters
	std::vector<std::string> parameters = (this->parser)->parseParameters(commandAsString);

	std::string executionResult = command->execute(parameters);
	std::cout << executionResult << std::endl;
}

std::vector<Hall> Engine::seed()
{
	return std::vector<Hall>();
}

