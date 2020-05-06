#include "OpenCommand.h"

std::string OpenCommand::execute(const std::vector<std::string>&)
{
	return Constants::Success;
}

std::string OpenCommand::toString()
{
	return Constants::OpenCommandName;
}
