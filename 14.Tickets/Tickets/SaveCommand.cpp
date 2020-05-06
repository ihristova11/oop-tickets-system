#include "SaveCommand.h"

std::string SaveCommand::execute(std::vector<std::string>)
{
	return Constants::Success;
}

std::string SaveCommand::toString()
{
	return Constants::SaveCommandName;
}
