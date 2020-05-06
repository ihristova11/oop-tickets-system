#include "ReportCommand.h"

std::string ReportCommand::execute(std::vector<std::string> parameters)
{
	return Constants::Success;
}

std::string ReportCommand::toString()
{
	return Constants::ReportCommandName;
}
