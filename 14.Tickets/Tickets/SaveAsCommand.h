#ifndef SAVE_AS_COMMAND_H
#define SAVE_AS_COMMAND_H

#include "ICommand.h"
#include "FileWriter.h"
#include "Validator.h"
class SaveAsCommand : public ICommand
{
public:
	SaveAsCommand(Store*, FileWriter*);

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
private:
	FileWriter* writer;
};

#endif // !SAVE_AS_COMMAND_H
