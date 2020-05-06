#ifndef CHECK_COMMAND_H
#define CHECK_COMMAND_H

#include "ICommand.h"

class CheckCommand : public ICommand
{
	// Inherited via ICommand
	virtual void execute(std::vector<std::string>) override;
	virtual std::string toString() override;
};

#endif // !CHECK_COMMAND_H