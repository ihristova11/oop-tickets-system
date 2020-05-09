#ifndef BUY_COMMAND_H
#define BUY_COMMAND_H

#include "ICommand.h"
#include "CommandValidator.h"

class BuyCommand : public ICommand
{
public: 
	BuyCommand(Store*, CommandValidator*);

	Store* store;
	CommandValidator* validator;
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !BUY_COMMAND_H
