#ifndef UNBOOK_COMMAND_H
#define UNBOOK_COMMAND_H
#include "ICommand.h"

class UnbookCommand : public ICommand
{
	// Inherited via ICommand
	virtual void execute() override;
};

#endif // !UNBOOK_COMMAND_H
