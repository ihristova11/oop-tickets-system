#ifndef OPEN_COMMAND_H
#define OPEN_COMMAND_H

#include "ICommand.h"
#include "FileReader.h"
#include "Validator.h"

class OpenCommand : public ICommand
{
public:
	OpenCommand(Store*, FileReader*);
	
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
private:
	FileReader* reader;
	void addTickets();
};

#endif // !OPEN_COMMAND_H
