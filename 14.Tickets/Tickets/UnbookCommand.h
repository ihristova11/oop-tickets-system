#ifndef UNBOOK_COMMAND_H
#define UNBOOK_COMMAND_H
#include "ICommand.h"

class UnbookCommand : public ICommand
{
public: 
	UnbookCommand(const Receiver&);

	Receiver receiver;
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !UNBOOK_COMMAND_H
