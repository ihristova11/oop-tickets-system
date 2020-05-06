#include "SaveAsCommand.h"

std::string SaveAsCommand::execute(const std::vector<std::string>&)
{
	return Constants::Success;
}

std::string SaveAsCommand::toString()
{
	return Constants::SaveAsCommandName;
}
