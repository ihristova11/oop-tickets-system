#ifndef EXIT_COMMAND_H
#define EXIT_COMMAND_H

#include "ICommand.h"

/// <summary>
/// ExitCommand exits the program without saving changes to the file.
/// </summary>
class ExitCommand : public ICommand
{
public:
	ExitCommand(Store*);

	/// <summary>
	/// execute() displays a message
	/// </summary>
	/// <param name="parameters">vector of string values</param>
	/// <returns>a constant string result of execution</returns>
	virtual std::string execute(const std::vector<std::string>&) override;

	/// <summary>
	/// toString() implementation
	/// </summary>
	/// <returns>Constants::ExitCommandName</returns>
	virtual std::string toString() override;
};
#endif // !EXIT_COMMAND_H
