#include "SaveCommand.h"

std::string SaveCommand::execute(const std::vector<std::string>&)
{
	return Constants::Success;
}

std::string SaveCommand::toString()
{
	return Constants::SaveCommandName;
}
