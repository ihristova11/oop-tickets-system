#ifndef BUY_COMMAND_H
#define BUY_COMMAND_H

#include "ICommand.h"
class BuyCommand : public ICommand
{
	// Inherited via ICommand
	virtual std::string execute(std::vector<std::string>) override;
	virtual std::string toString() override;
};

#endif // !BUY_COMMAND_H
