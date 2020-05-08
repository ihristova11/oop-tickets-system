#include "CloseCommand.h"

std::string CloseCommand::execute(const std::vector<std::string>& parameters)
{
	std::string file = parameters[1]; // check if valid file

	// delete receiver->halls

	return Constants::CloseSuccess;
}

std::string CloseCommand::toString()
{
	return Constants::CloseCommandName;
}
