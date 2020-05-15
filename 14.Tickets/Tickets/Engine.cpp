#include "Engine.h"
#include "CommandParser.h"

#include <string>
#include <iostream>

Engine::Engine()
{
	this->writer = new FileWriter();
	this->reader = new FileReader();
	this->parser = new CommandParser(&this->store, this->reader, this->writer);
}

Engine& Engine::getInstance()
{
	static Engine instance;
	return instance;
}

Engine::~Engine()
{
	delete this->writer;
	delete this->reader;
	delete this->parser;
}

void Engine::start()
{
	while (true)
	{
		std::string commandString;
		// read the command here
		std::getline(std::cin, commandString);

		// can start with open command only
		if ((this->parser)->parseCommand(commandString) != nullptr
			&& (this->parser)->parseCommand(commandString)->toString()
			!= Constants::OpenCommandName
			&& begin)
		{
			std::cout << Constants::OpenCommandOnly << std::endl;
			continue;
		}
				
		this->processCommand(commandString);

		if ((this->parser)->parseCommand(commandString) != nullptr
			&& (this->parser)->parseCommand(commandString)->toString()
			== Constants::ExitCommandName)
		{
			break;
		}

		//TODO: CANNOT OPEN FILE AGAIN RIGHT AFTER OPENING A FILE
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
		if (begin && command->toString() != Constants::OpenCommandName)
		{
			std::cout << Constants::OpenCommandOnly << std::endl;
		}
		else
		{			
			std::string executionResult = command->execute(parameters);
			std::cout << executionResult << std::endl;
			this->begin = command->toString() == Constants::CloseCommandName;
		}
	}
	else
	{
		std::cout << Constants::InvalidCommand << std::endl;
	}
}