#include "SaveAsCommand.h"

std::string SaveAsCommand::execute(std::vector<std::string>)
{
	return Constants::Success;
}

std::string SaveAsCommand::toString()
{
	return Constants::SaveAsCommandName;
}
