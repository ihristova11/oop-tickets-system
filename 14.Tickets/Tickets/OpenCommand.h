#ifndef OPEN_COMMAND_H
#define OPEN_COMMAND_H

#include "ICommand.h"
#include "FileReader.h"
#include "CommandValidator.h"

class OpenCommand : public ICommand
{
public:
	OpenCommand(Store*, FileReader*, CommandValidator*);

	CommandValidator* validator; // base class
	Store* store; // base class
	FileReader* reader;
	
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;

private:
	void addTickets();
};

#endif // !OPEN_COMMAND_H
