#ifndef ADD_EVENT_COMMAND_H
#define ADD_EVENT_COMMAND_H

#include "ICommand.h"
#include "FileReader.h"
#include "Validator.h"

/// <summary>
/// AddEventCommand creates a new event with given parameters and saves it to the Store.
/// </summary>
class AddEventCommand : public ICommand
{
public:
	AddEventCommand(Store*, FileReader*);

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
private:
	FileReader* reader;
};

#endif // !ADD_EVENT_COMMAND_H


