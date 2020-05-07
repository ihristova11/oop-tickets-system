#ifndef ADD_EVENT_COMMAND_H
#define ADD_EVENT_COMMAND_H

#include "ICommand.h"

class AddEventCommand : public ICommand
{
public:
	AddEventCommand(const Receiver&);

	Receiver receiver;

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !ADD_EVENT_COMMAND_H


