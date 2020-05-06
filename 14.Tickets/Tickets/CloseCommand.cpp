#include "CloseCommand.h"

std::string CloseCommand::execute(const std::vector<std::string>&)
{
	return Constants::Success;
}

std::string CloseCommand::toString()
{
	return Constants::CloseCommandName;
}
