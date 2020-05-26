#ifndef REPORT_COMMAND_H
#define REPORT_COMMAND_H

#include "ICommand.h"

/// <summary>
/// ReportCommand displays information for purchased tickets for a given time interval
/// </summary>
class ReportCommand : public ICommand
{
public: 
	ReportCommand(Store*);

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !REPORT_COMMAND_H