#include "FreeSeatsCommand.h"

FreeSeatsCommand::FreeSeatsCommand(Store* store)
{
	ICommand::store = store;
}

std::string FreeSeatsCommand::execute(const std::vector<std::string>& parameters)
{
	// validate number of params
	std::string date = parameters[1];
	std::string name = parameters[2];

	Event* res = this->store->getEvent(date, name);
	if (res != nullptr)
	{
		// get all places in hall
		int all = res->hall.rows * res->hall.seatsPerRow;
		bool* seats = new bool[all] { 0 };
		int ind, row, seat;
		// fill in with non-empty seats
		for (int i = 0; i < res->tickets.size(); i++)
		{
			ind = res->tickets[i].seat + res->tickets[i].row * res->hall.seatsPerRow;
			seats[ind] = 1;
		}

		std::cout << "Free seats:" << std::endl;
		//print the empty seats
		for (int i = 0; i < all; i++)
		{
			if (!seats[i])
			{
				row = i / res->hall.seatsPerRow;
				seat = i - row * res->hall.seatsPerRow;
				std::cout << "Row: " << row << " Seat: " << seat << std::endl;
			}
		}

		delete[] seats;
		return Constants::Success;
	}

	return Constants::NoEvent;
}

std::string FreeSeatsCommand::toString()
{
	return Constants::FreeSeatsCommandName;
}
