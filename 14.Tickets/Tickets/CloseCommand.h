#ifndef CLOSE_COMMAND_H
#define CLOSE_COMMAND_H

#include "ICommand.h"
class CloseCommand : public ICommand
{
	// Inherited via ICommand
	virtual std::string execute(std::vector<std::string>) override;
	virtual std::string toString() override;
};

#endif // !CLOSE_COMMAND_H