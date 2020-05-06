#include "OpenCommand.h"

std::string OpenCommand::execute(std::vector<std::string>)
{
	return Constants::Success;
}

std::string OpenCommand::toString()
{
	return Constants::OpenCommandName;
}
