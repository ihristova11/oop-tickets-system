#ifndef BOOK_COMMAND_H
#define BOOK_COMMAND_H

#include "ICommand.h"

class BookCommand : public ICommand
{
	// Inherited via ICommand
	virtual void execute(std::vector<std::string>) override;
};

#endif // !BOOK_COMMAND_H
