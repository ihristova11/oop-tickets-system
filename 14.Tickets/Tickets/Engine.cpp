#include "Engine.h"
#include "CommandParser.h"

#include <string>
#include <iostream>

Engine::Engine()
{
	this->parser = new CommandParser(&this->receiver);
	this->writer = new FileWriter();
	this->reader = new FileReader();
}

Engine::~Engine()
{
	delete this->parser;
	delete this->writer;
	delete this->reader;
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
	Hall halls[3] = { Hall(1), Hall(2), Hall(3) };
	Event events[2] =
	{
		Event("2020-08-08", "testEvent", Hall(1)),
		Event("2020-08-08", "testEvent", Hall(2))
	};
	Ticket tickets[2] =
	{
		Ticket(1, 1, &events[1]),
		Ticket(1, 1, &events[0]),
	};

	std::ofstream hallsBin{ "halls.bin", std::ios::binary };
	this->writer->writeBinary(halls, std::cend(halls), hallsBin);

	std::ofstream eventsBin{ "events.bin", std::ios::binary };
	this->writer->writeBinary(events, std::cend(events), eventsBin);

	std::ofstream ticketsBin{ "tickets.bin", std::ios::binary };
	this->writer->writeBinary(tickets, std::cend(tickets), ticketsBin);

	// close streams
}

