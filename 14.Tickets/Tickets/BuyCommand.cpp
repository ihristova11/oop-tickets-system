#include "BuyCommand.h"
#include "Constants.h"

std::string BuyCommand::execute(std::vector<std::string> parameters)
{
	return Constants::Success;
}

std::string BuyCommand::toString()
{
	return Constants::BuyCommandName;
}
