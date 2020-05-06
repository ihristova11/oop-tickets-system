#ifndef HELP_COMMAND_H
#define HELP_COMMAND_H

#include "ICommand.h"
class HelpCommand : public ICommand
{
	// Inherited via ICommand
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !HELP_COMMAND_H
