#ifndef BUY_COMMAND_H
#define BUY_COMMAND_H

#include "ICommand.h"
class BuyCommand : public ICommand
{
	// Inherited via ICommand
	virtual void execute() override;
};

#endif // !BUY_COMMAND_H
