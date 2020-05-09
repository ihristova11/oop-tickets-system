#ifndef UNBOOK_COMMAND_H
#define UNBOOK_COMMAND_H
#include "ICommand.h"
#include "CommandValidator.h"

class UnbookCommand : public ICommand
{
public:
	UnbookCommand(Store*, CommandValidator*);

	Store* store;
	CommandValidator* validator;
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !UNBOOK_COMMAND_H
