#ifndef CHECK_COMMAND_H
#define CHECK_COMMAND_H

#include "ICommand.h"
#include "Validator.h"

class CheckCommand : public ICommand
{
public: 
	CheckCommand(Store*);

	Store* store;

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !CHECK_COMMAND_H