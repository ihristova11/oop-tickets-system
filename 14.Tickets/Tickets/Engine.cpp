#include "Engine.h"
#include "CommandParser.h"

#include <string>
#include <iostream>

Engine::Engine()
{
	this->writer = new FileWriter();
	this->reader = new FileReader();
	this->parser = new CommandParser(&this->receiver, this->reader);

}

Engine::~Engine()
{
	delete this->writer;
	delete this->reader;
	delete this->parser;
}

void Engine::start()
{
	this->seed(); // for testing purposes

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
	// already defined (do not load from file)
	Hall halls[3] = { Hall(1, 5, 5), Hall(2, 4, 4), Hall(3, 3, 3) };

	Event events[2] =
	{
		Event("2020-08-08", "testEvent",  Hall(1, 5, 5)),
		Event("2020-08-08", "testEvent", Hall(2, 4, 4))
	};


	//std::ofstream eventsBin{ "events.bin", std::ios::binary };
	//this->writer->writeBinary(events, std::cend(events), eventsBin);

	// close streams ? 
}

