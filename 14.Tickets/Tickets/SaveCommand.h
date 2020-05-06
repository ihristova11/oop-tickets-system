#ifndef SAVE_COMMAND_H
#define SAVE_COMMAND_H

#include "ICommand.h"
class SaveCommand : public ICommand
{
	// Inherited via ICommand
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !SAVE_COMMAND_H
