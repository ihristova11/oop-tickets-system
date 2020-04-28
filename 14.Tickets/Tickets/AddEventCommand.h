#ifndef ADD_EVENT_COMMAND_H
#define ADD_EVENT_COMMAND_H

#include "ICommand.h"

class AddEventCommand : public ICommand
{
public: 
	virtual void execute(std::vector<std::string>) override;
};

#endif // !ADD_EVENT_COMMAND_H

