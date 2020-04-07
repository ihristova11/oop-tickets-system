#ifndef FREE_SEATS_COMMAND_H
#define FREE_SEATS_COMMAND_H
#include "ICommand.h"

class FreeSeatsCommand : public ICommand
{
	// Inherited via ICommand
	virtual void execute() override;
};

#endif // !FREE_SEATS_COMMAND_H
