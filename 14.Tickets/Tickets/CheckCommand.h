#ifndef CHECK_COMMAND_H
#define CHECK_COMMAND_H

#include "ICommand.h"
#include "Validator.h"

/// <summary>
/// CheckCommand does a check if a ticket with a given id is valid
/// </summary>
class CheckCommand : public ICommand
{
public: 
	CheckCommand(Store*);

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !CHECK_COMMAND_H