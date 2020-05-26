#ifndef BUY_COMMAND_H
#define BUY_COMMAND_H

#include "ICommand.h"
#include "Validator.h"

/// <summary>
/// BuyCommand saves a ticket and sets its status to purchased
/// </summary>
class BuyCommand : public ICommand
{
public: 
	BuyCommand(Store*);

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !BUY_COMMAND_H
