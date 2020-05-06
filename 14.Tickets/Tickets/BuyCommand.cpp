#include "BuyCommand.h"

std::string BuyCommand::execute(const std::vector<std::string>& parameters)
{
	return Constants::Success;
}

std::string BuyCommand::toString()
{
	return Constants::BuyCommandName;
}
