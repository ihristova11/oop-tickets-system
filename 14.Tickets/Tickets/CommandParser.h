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
	ICommand* parseCommand(std::string fullCommand); // should return command, may use reflection
	std::vector<std::string> parseParameters(std::string fullCommand);
private:
	void findCommand(std::string commandName); // probably use reflection here

	// https://stackoverflow.com/questions/236129/how-do-i-iterate-over-the-words-of-a-string
	template <typename T>
	void split(const std::string& s, char delim, T result);

	std::vector<std::string> split(const std::string& s, char delim);
};

#endif // !COMMAND_PARSER_H
