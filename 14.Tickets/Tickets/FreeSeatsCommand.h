#ifndef FREE_SEATS_COMMAND_H
#define FREE_SEATS_COMMAND_H
#include "ICommand.h"

class FreeSeatsCommand : public ICommand
{
	// Inherited via ICommand
	virtual void execute(std::vector<std::string>) override;
	virtual std::string toString() override;
};

#endif // !FREE_SEATS_COMMAND_H
