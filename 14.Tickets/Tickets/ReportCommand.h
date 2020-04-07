#ifndef REPORT_COMMAND_H
#define REPORT_COMMAND_H

#include "ICommand.h"

class ReportCommand : public ICommand
{
	// Inherited via ICommand
	virtual void execute() override;
};

#endif // !REPORT_COMMAND_H