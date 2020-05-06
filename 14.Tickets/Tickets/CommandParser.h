#ifndef COMMAND_PARSER_H
#define COMMAND_PARSER_H

#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include "ICommand.h"
#include "ICommandParser.h"

class CommandParser : public ICommandParser
{
public:
	CommandParser();

	ICommand* parseCommand(const std::string&);
	std::vector<std::string> parseParameters(const std::string&);
private:
	std::vector<ICommand*> commands;

	void seedCommands();

	// https://stackoverflow.com/questions/236129/how-do-i-iterate-over-the-words-of-a-string
	template <typename T>
	void split(const std::string& s, char delim, T result);
	std::vector<std::string> split(const std::string& s, char delim);
};

#endif // !COMMAND_PARSER_H
