#ifndef OPEN_COMMAND_H
#define OPEN_COMMAND_H

#include "ICommand.h"
#include "FileReader.h"
#include "CommandValidator.h"

class OpenCommand : public ICommand
{
public:
	OpenCommand(Receiver*, FileReader*, CommandValidator*);

	CommandValidator* validator; // base class
	Receiver* receiver; // base class
	FileReader* reader;
	
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;

private:
	void addTickets();
};

#endif // !OPEN_COMMAND_H
