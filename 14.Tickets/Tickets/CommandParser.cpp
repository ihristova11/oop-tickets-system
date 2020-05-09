#include "CommandParser.h"

#include "AddEventCommand.h"
#include "FreeSeatsCommand.h"
#include "BookCommand.h"
#include "UnbookCommand.h"
#include "BuyCommand.h"
#include "BookingsCommand.h"
#include "CheckCommand.h"
#include "ReportCommand.h"
#include "HelpCommand.h"
#include "PopularEventsCommand.h"
#include "ExitCommand.h"
#include "OpenCommand.h"

CommandParser::CommandParser(Store* store, FileReader* reader)
	: store(store), reader(reader)
{
	seedCommands();
}

ICommand* CommandParser::parseCommand(const std::string& fullCommand)
{
	std::string commandName = this->split(fullCommand, ' ')[0];
	ICommand* command = nullptr;
	for (size_t i = 0; i < commands.size(); i++)
	{
		if ((this->commands[i])->toString() == commandName) // check if it works this way
		{
			command = this->commands[i];
			break;
		}
	}
	return command;
}

std::vector<std::string> CommandParser::parseParameters(const std::string& fullCommand)
{
	return split(fullCommand, ' ');
}

void CommandParser::seedCommands()
{
	// register commands
	this->commands.push_back(new AddEventCommand(this->store,
		this->reader, &this->validator));
	this->commands.push_back(new FreeSeatsCommand(this->store));
	this->commands.push_back(new BookCommand(this->store, &this->validator));
	this->commands.push_back(new UnbookCommand(this->store, &this->validator));
	this->commands.push_back(new BuyCommand(this->store, &this->validator));
	this->commands.push_back(new BookingsCommand(this->store));
	this->commands.push_back(new CheckCommand(this->store));
	this->commands.push_back(new ReportCommand(this->store));
	this->commands.push_back(new PopularEventsCommand(this->store));

	this->commands.push_back(new HelpCommand(this->store));
	this->commands.push_back(new ExitCommand(this->store));
	this->commands.push_back(new OpenCommand(this->store,
		this->reader, &this->validator));
}

template <typename T>
void CommandParser::split(const std::string& s, char delim, T result) {
	std::istringstream iss(s);
	std::string item;
	while (std::getline(iss, item, delim)) {
		*result++ = item;
	}
}

std::vector<std::string> CommandParser::split(const std::string& s, char delim) {
	std::vector<std::string> elems;
	split(s, delim, std::back_inserter(elems));
	return elems;
}
