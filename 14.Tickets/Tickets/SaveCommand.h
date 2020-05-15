#ifndef SAVE_COMMAND_H
#define SAVE_COMMAND_H

#include "ICommand.h"
#include "FileWriter.h"
class SaveCommand : public ICommand
{
public:
	SaveCommand(Store*, FileWriter*);

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
private:
	FileWriter* writer;
};

#endif // !SAVE_COMMAND_H
