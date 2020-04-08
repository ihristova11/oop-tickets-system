#include "CommandParser.h"

//ICommand CommandParser::parseCommand(std::string fullCommand) // todo: implement logic
//{
//	std::string commandName = split(fullCommand, ' ')[0];
//
//	switch (commandName)
//	{
//	case "exit":
//		break;
//	default:
//		break;
//	}
//}

std::vector<std::string> CommandParser::parseParameters(std::string fullCommand)
{
	return split(fullCommand, ' ');
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

void CommandParser::findCommand(std::string commandName)
{
}
