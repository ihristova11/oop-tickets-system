#ifndef CLOSE_COMMAND_H
#define CLOSE_COMMAND_H

#include "ICommand.h"
class CloseCommand : public ICommand
{
public:
	CloseCommand(Store*);

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
private:
	Store* store;
};

#endif // !CLOSE_COMMAND_H
