#ifndef COMMAND_PARSER_H
#define COMMAND_PARSER_H

#include <string>
#include <vector>

class CommandParser
{
public:
	std::string parseCommand(std::string fullCommand); // should return command, may use reflection
	std::vector<std::string> parseParameters(std::string fullCommand);
private:
	void findCommand(std::string commandName); // probably use reflection here
};

#endif // !COMMAND_PARSER_H
