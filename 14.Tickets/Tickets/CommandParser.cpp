#include "CommandParser.h"

#include "AddEventCommand.h"
#include "FreeSeatsCommand.h"
#include "BookCommand.h"
#include "UnbookCommand.h"
#include "BuyCommand.h"
#include "BookingsCommand.h"
#include "CheckCommand.h"
#include "ReportCommand.h"

CommandParser::CommandParser(const Receiver& receiver)
{
	this->receiver = Receiver(receiver);
	this->seedCommands();
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
	this->commands.push_back(new AddEventCommand(this->receiver));
	this->commands.push_back(new FreeSeatsCommand(this->receiver));
	this->commands.push_back(new BookCommand(this->receiver));
	this->commands.push_back(new UnbookCommand(this->receiver));
	this->commands.push_back(new BuyCommand(this->receiver));
	this->commands.push_back(new BookingsCommand(this->receiver));
	this->commands.push_back(new CheckCommand(this->receiver));
	this->commands.push_back(new ReportCommand(this->receiver));
}

template <typename Out>
void CommandParser::split(const std::string& s, char delim, Out result) {
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
