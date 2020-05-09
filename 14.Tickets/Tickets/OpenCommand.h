#ifndef OPEN_COMMAND_H
#define OPEN_COMMAND_H

#include "ICommand.h"
#include "FileReader.h"

class OpenCommand : public ICommand
{
public:
	OpenCommand(Receiver*, FileReader*);

	Receiver* receiver;
	FileReader* reader;

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !OPEN_COMMAND_H
