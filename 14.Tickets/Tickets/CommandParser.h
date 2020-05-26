#ifndef COMMAND_PARSER_H
#define COMMAND_PARSER_H

#include <string>
#include <vector>
#include <sstream>
#include <iterator>

#include "ICommand.h"
#include "ICommandParser.h"
#include "FileReader.h"
#include "FileWriter.h"
#include "Validator.h"

/// <summary>
/// ICommandParser implementation
/// </summary>
class CommandParser : public ICommandParser
{
public:
	CommandParser(Store*, FileReader*, FileWriter*);
	virtual ~CommandParser();

	virtual ICommand* parseCommand(const std::string&) override;
	virtual std::vector<std::string> parseParameters(const std::string&) override;
private:
	std::vector<ICommand*> commands;
	Store* store;
	FileReader* reader;
	FileWriter* writer;

	/// <summary>
	/// Registers all commands to be used during the program execution
	/// </summary>
	void seedCommands();

	/// <summary>
	/// Template function used to split strings
	/// </summary>
	/// <param name="s">a string representation</param>
	/// <param name="delim">delimiter</param>
	/// <param name="result"></param>
	template <typename T>
	void split(const std::string& s, char delim, T result);

	/// <summary>
	/// Helper function for the template split()
	/// </summary>
	/// <param name="s">a string representation</param>
	/// <param name="delim">delimiter</param>
	/// <returns>std::vector<std::string> with the result</returns>
		std::vector<std::string> split(const std::string& s, char delim);
};

#endif // !COMMAND_PARSER_H
