#ifndef ICOMMAND_PARSER_H
#define ICOMMAND_PARSER_H

#include "ICommand.h"
#include <vector>
#include <string>

class ICommandParser
{
public:
	virtual ICommand* parseCommand(const std::string&) = 0;
	virtual std::vector<std::string> parseParameters(const std::string&) = 0;

	virtual std::vector<std::string> split(const std::string& s, char delim) = 0; 
private:
	// https://stackoverflow.com/questions/236129/how-do-i-iterate-over-the-words-of-a-string
	template <typename T>
	void split(const std::string& s, char delim, T result);

};

#endif // !ICOMMAND_PARSER_H
