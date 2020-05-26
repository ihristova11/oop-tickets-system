#include "Store.h"

Store::Store() // todo
{
	this->seed();
}

Store::Store(const Store& other)
{
	copyInternals(other);
}

Store& Store::operator=(const Store& other)
{
	if (this != &other)
	{
		copyInternals(other);
	}
	return *this;
}

Hall Store::getHallWithId(const int& hallId) const
{
	Hall hall;

	//find hall with that name
	for (size_t i = 0; i < this->halls.size(); i++)
	{
		if (this->halls[i].getId() == hallId) // what if there is no such hall?
		{
			hall = this->halls[i];
			break;
		}
	}

	return hall;
}

bool Store::hallExists(const int& hallId) const
{
	int len = this->halls.size();
	for (size_t i = 0; i < len; i++)
	{
		if (this->halls[i].getId() == hallId)
		{
			return true;
		}
	}
	return false;
}

bool Store::hallFree(const std::string& date, const int& hallId) const
{
	for (size_t i = 0; i < this->events.size(); i++)
	{
		if (this->events[i].date == date && this->events[i].hall.getId() == hallId)
		{
			return false;
		}
	}
	return true;
}

bool Store::eventExists(const std::string& date, const std::string& name)
{
	return this->getEvent(date, name) != nullptr;
}

bool Store::isAvailableSeat(const std::string& date, const std::string& name,
	const int& row, const int& seat)
{
	Event* found = this->getEvent(date, name);
	if (found == nullptr) return false;
	for (size_t i = 0; i < found->tickets.size(); i++)
	{
		if (found->tickets[i].getRow() == row && found->tickets[i].getSeat() == seat)
		{
			return false;
		}
	}
	return true;
}

Event* Store::getEvent(const std::string& date, const std::string& name)
{
	Event* found = nullptr;

	for (size_t i = 0; i < this->events.size(); i++)
	{
		if (this->events[i].date == date
			&& this->events[i].name == name)
		{
			found = &(this->events[i]);
			break;
		}
	}

	return found;
}

int Store::getTicketInd(std::vector<Ticket>& store, const std::string& date,
	const std::string& name, const int& row, const int& seat) const
{
	int len = store.size();
	for (size_t i = 0; i < len; i++)
	{
		if (store[i].getSeat() == seat
			&& store[i].getRow() == row)
		{
			return i;
		}
	}
	return -1;
}

Ticket* Store::getTicketByCode(const std::string& code)
{
	for (size_t i = 0; i < this->tickets.size(); i++)
	{
		if (this->tickets[i].getCode() == code)
		{
			return &this->tickets[i];
		}
	}
	return nullptr;
}

void Store::copyInternals(const Store& other)
{
	this->halls = other.halls;
	this->events = other.events;
	this->tickets = other.tickets;
}

void Store::seed()
{
	this->halls = { Hall(1, 5, 5), Hall(2, 4, 4), Hall(3, 3, 3) };

	// for testing purposes
	// already defined (do not load from file)

	//// for testing purposes | DELETE LATER
	//// update names
	//std::vector<Ticket> tickets1 = { Ticket(1,1, 1, "2020-08-08"), Ticket(2,2, 2, "2020-08-08"), Ticket(3,3, 2, "2020-08-08") };
	//std::vector<Ticket> tickets2 = { Ticket(1,1, 1, "2020-08-09"), Ticket(2,2, 2, "2020-08-09"), Ticket(3,3, 3, "2020-08-09") };

	//std::vector<Event> events =
	//{
	//	Event("2020-08-08", "testEvent",  Hall(1, 5, 5), tickets1),
	//	Event("2020-08-08", "testEvent", Hall(2, 4, 4), tickets2)
	//};

	//// in writer or not?
	//this->writer->write("events.txt", events);
}
