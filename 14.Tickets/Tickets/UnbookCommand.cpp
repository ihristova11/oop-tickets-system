#include "UnbookCommand.h"

UnbookCommand::UnbookCommand(Store* store)
{
	ICommand::store = store;
}

std::string UnbookCommand::execute(const std::vector<std::string>& parameters)
{
	bool error = true;
	if (Validator::isValidParametersCount(5, parameters.size()))
	{
		int row = std::stoi(parameters[1]);
		int seat = std::stoi(parameters[2]);
		std::string date = parameters[3];
		std::string name = parameters[4];

		if (Validator::isValidDate(date) && this->store->getEvent(date, name) != nullptr
			&& this->store->getTicketInd(this->store->getEvent(date, name)->tickets,
				date, name, row, seat) != -1)
		{
			error = false;
			//remove from events->tickets
			std::vector<Ticket>::iterator begin = this->store->getEvent(date, name)->tickets.begin();
			this->store->getEvent(date, name)->tickets
				.erase(begin + this->store->getTicketInd(this->store->getEvent(date, name)->tickets, date, name, row, seat));

			// remove from tickets
			std::vector<Ticket>::iterator beg = this->store->tickets.begin();
			this->store->tickets.erase(beg +
				this->store->getTicketInd(this->store->tickets, date, name, row, seat));

			return Constants::Success;
		}
	}
	
	if (error)
	{
		return Constants::InvalidParameters;
	}

	return Constants::UnbookError;
}

std::string UnbookCommand::toString()
{
	return Constants::UnbookCommandName;
}
