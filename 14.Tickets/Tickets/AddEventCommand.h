#ifndef ADD_EVENT_COMMAND_H
#define ADD_EVENT_COMMAND_H

#include "ICommand.h"
#include "FileReader.h"
#include "CommandValidator.h"

/** Add an event command that updates the receiver*/

class AddEventCommand : public ICommand
{
public:
	AddEventCommand(Receiver*, FileReader*, CommandValidator*);

	Receiver* receiver;
	FileReader* reader;
	CommandValidator* validator;

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
private: 
	bool hallExists(const int&);
	bool hallFree(const std::string&, const int&);
};

#endif // !ADD_EVENT_COMMAND_H


