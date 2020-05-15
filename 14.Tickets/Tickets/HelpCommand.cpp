#include "HelpCommand.h"

HelpCommand::HelpCommand(Store* store)
{
	ICommand::store = store;
}

std::string HelpCommand::execute(const std::vector<std::string>&)
{
	// not interested in checking the parameters
	return Constants::HelpRensponse;
}

std::string HelpCommand::toString()
{
	return Constants::HelpCommandName;
}
