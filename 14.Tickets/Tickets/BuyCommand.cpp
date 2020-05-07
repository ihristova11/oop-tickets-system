#include "BuyCommand.h"

BuyCommand::BuyCommand(Receiver* receiver) : receiver(receiver)
{ }

std::string BuyCommand::execute(const std::vector<std::string>& parameters)
{
	int row = std::stoi(parameters[1]);
	int seat = std::stoi(parameters[2]);
	std::string date = parameters[3];
	std::string name = parameters[4];

	this->receiver->buyTicket(row, seat, date, name);

	return Constants::Success;
}

std::string BuyCommand::toString()
{
	return Constants::BuyCommandName;
}
