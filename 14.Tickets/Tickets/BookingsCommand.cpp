#include "BookingsCommand.h"

BookingsCommand::BookingsCommand(const Receiver& receiver) : receiver(receiver)
{ }

std::string BookingsCommand::execute(const std::vector<std::string>& parameters)
{
	return Constants::Success;
}

std::string BookingsCommand::toString()
{
	return Constants::BookingsCommandName;
}
