#ifndef OPEN_COMMAND_H
#define OPEN_COMMAND_H

#include "ICommand.h"
class OpenCommand : public ICommand
{
	// Inherited via ICommand
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !OPEN_COMMAND_H
