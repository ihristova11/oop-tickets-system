#include "SaveCommand.h"

SaveCommand::SaveCommand(Store*)
{
	ICommand::store = store;
}

std::string SaveCommand::execute(const std::vector<std::string>&)
{
	return Constants::Success;
}

std::string SaveCommand::toString()
{
	return Constants::SaveCommandName;
}
