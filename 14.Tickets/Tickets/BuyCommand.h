#ifndef BUY_COMMAND_H
#define BUY_COMMAND_H

#include "ICommand.h"
class BuyCommand : public ICommand
{
public: 
	BuyCommand(const Receiver&);

	Receiver receiver;
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !BUY_COMMAND_H
