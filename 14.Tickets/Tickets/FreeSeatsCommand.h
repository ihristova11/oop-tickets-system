#ifndef FREE_SEATS_COMMAND_H
#define FREE_SEATS_COMMAND_H
#include "ICommand.h"

class FreeSeatsCommand : public ICommand
{
public: 
	FreeSeatsCommand(Store*);

	Store* store;
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !FREE_SEATS_COMMAND_H
