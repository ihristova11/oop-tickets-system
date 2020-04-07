#ifndef BOOK_COMMAND_H
#define BOOK_COMMAND_H

#include "ICommand.h"

class BookCommand : public ICommand
{
	// Inherited via ICommand
	virtual void execute() override;
};

#endif // !BOOK_COMMAND_H
