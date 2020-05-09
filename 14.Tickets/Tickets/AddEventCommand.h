#ifndef ADD_EVENT_COMMAND_H
#define ADD_EVENT_COMMAND_H

#include "ICommand.h"
#include "FileReader.h"
#include "CommandValidator.h"

/** Add an event command that updates the store*/

class AddEventCommand : public ICommand
{
public:
	AddEventCommand(Store*, FileReader*, CommandValidator*);

	Store* store;
	FileReader* reader;
	CommandValidator* validator;

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !ADD_EVENT_COMMAND_H


