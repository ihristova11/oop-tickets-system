#ifndef ADD_EVENT_COMMAND_H
#define ADD_EVENT_COMMAND_H

#include "ICommand.h"
#include "FileReader.h"
#include "Validator.h"

/** Add an event command that updates the store*/

class AddEventCommand : public ICommand
{
public:
	AddEventCommand(Store*, FileReader*);

	Store* store;
	FileReader* reader;

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !ADD_EVENT_COMMAND_H


