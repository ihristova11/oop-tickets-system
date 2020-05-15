#ifndef UNBOOK_COMMAND_H
#define UNBOOK_COMMAND_H
#include "ICommand.h"
#include "Validator.h"

class UnbookCommand : public ICommand
{
public:
	UnbookCommand(Store*);

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !UNBOOK_COMMAND_H
