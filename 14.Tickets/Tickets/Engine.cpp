#include "Engine.h"
#include <string>
#include "CommandType.h"

#include "AddEventCommand.h"
#include "FreeSeatsCommand.h"
#include "BookCommand.h"
#include "UnbookCommand.h"
#include "BuyCommand.h"
#include "BookingsCommand.h"
#include "CheckCommand.h"
#include "ReportCommand.h"


Engine::Engine()
{
	this->seedCommands();
}

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

		this->processCommand(commandString);
	}
}

const ICommandParser* Engine::getParser() const
{
	return this->parser;
}

void Engine::seedCommands()
{
	this->commands.push_back(new AddEventCommand());
	this->commands.push_back(new FreeSeatsCommand());
	this->commands.push_back(new BookCommand());
	this->commands.push_back(new UnbookCommand());
	this->commands.push_back(new BuyCommand());
	this->commands.push_back(new BookingsCommand());
	this->commands.push_back(new CheckCommand());
	this->commands.push_back(new ReportCommand());
}

void Engine::processCommand(std::string commandAsString)
{
	if (commandAsString.empty())
		throw "Command cannot be empty!"; // should have a test for this
	

	// todo: should be in a function
	std::string commandName = (this->parser)->split(commandAsString, ' ')[0];
	// get command from the vector of commands
	for (int i = 0; i < commands.size(); i++)
	{
		if ((this->commands[i])->toString() == commandName) // check if it works this way
		{

		}
	}




	// todo: test it with values with spaces
	std::vector<std::string> parameters = (this->parser)->parseParameters(commandAsString); 

	//std::string executionResult = command.execute(); 
	// todo: << executionResult
}

