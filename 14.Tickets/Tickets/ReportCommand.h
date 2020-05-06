#ifndef REPORT_COMMAND_H
#define REPORT_COMMAND_H

#include "ICommand.h"

class ReportCommand : public ICommand
{
	// Inherited via ICommand
	virtual std::string execute(std::vector<std::string>) override;
	virtual std::string toString() override;
};

#endif // !REPORT_COMMAND_H