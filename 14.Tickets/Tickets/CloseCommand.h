#ifndef CLOSE_COMMAND_H
#define CLOSE_COMMAND_H

#include "ICommand.h"

/// <summary>
/// CloseCommand class hold the logic of closing the last document opened.
/// </summary>
class CloseCommand : public ICommand
{
public:
	CloseCommand(Store*);

	/// <summary>
	/// execute() deletes all information loaded in memory which is stored in Store.
	/// </summary>
	/// <param name="parameters">vector of string values</param>
	/// <returns>a string containing an execution message</returns>
	virtual std::string execute(const std::vector<std::string>&) override;

	/// <summary>
	/// toString() implementation
	/// </summary>
	/// <returns>Constants::CloseCommandName</returns>
	virtual std::string toString() override;
};

#endif // !CLOSE_COMMAND_H
