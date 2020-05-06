#ifndef SAVE_AS_COMMAND_H
#define SAVE_AS_COMMAND_H

#include "ICommand.h"
class SaveAsCommand : public ICommand
{
	// Inherited via ICommand
	virtual std::string execute(std::vector<std::string>) override;
	virtual std::string toString() override;
};

#endif // !SAVE_AS_COMMAND_H
