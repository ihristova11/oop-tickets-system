#include "Engine.h"
#include "CommandParser.h"

#include <string>
#include <iostream>

Engine::Engine()
{
	seed(); // todo: seed file with halls and events
	this->parser = new CommandParser(&this->receiver);
}

Engine::~Engine()
{
	delete this->parser;
}

void Engine::start()
{
	// try catch ?

	while (true)
	{
		std::string commandString;
		// read the command here
		std::getline(std::cin, commandString);

		this->processCommand(commandString);

		if (commandString == "exit")
			break;
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

	if (command != nullptr)
	{
		std::string executionResult = command->execute(parameters);
		std::cout << executionResult << std::endl;
	}
	else
	{
		std::cout << Constants::Error << std::endl;
	}
}

void Engine::seed()
{
	// for testing purposes
	this->receiver.halls.push_back(Hall(1));
	this->receiver.halls.push_back(Hall(2));
	this->receiver.halls.push_back(Hall(3));
}

