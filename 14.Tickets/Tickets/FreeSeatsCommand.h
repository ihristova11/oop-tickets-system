#ifndef FREE_SEATS_COMMAND_H
#define FREE_SEATS_COMMAND_H
#include "ICommand.h"

/// <summary>
/// FreeSeatsCommand displays information about free tickets on a given date for a particular event
/// </summary>
class FreeSeatsCommand : public ICommand
{
public: 
	FreeSeatsCommand(Store*);

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !FREE_SEATS_COMMAND_H
