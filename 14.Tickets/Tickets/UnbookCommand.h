#ifndef UNBOOK_COMMAND_H
#define UNBOOK_COMMAND_H
#include "ICommand.h"

class UnbookCommand : public ICommand
{
	// Inherited via ICommand
	virtual std::string execute(std::vector<std::string>) override;
	virtual std::string toString() override;
};

#endif // !UNBOOK_COMMAND_H
