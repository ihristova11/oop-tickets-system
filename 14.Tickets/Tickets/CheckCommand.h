#ifndef CHECK_COMMAND_H
#define CHECK_COMMAND_H

#include "ICommand.h"
#include "CommandValidator.h"

class CheckCommand : public ICommand
{
public: 
	CheckCommand(Store*, CommandValidator*);

	Store* store;
	CommandValidator* validator;
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !CHECK_COMMAND_H