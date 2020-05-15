#include "Store.h"

Store::Store() // todo
{ }

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
		if (this->halls[i].id == hallId) // what if there is no such hall?
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
		if (this->halls[i].id == hallId)
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
		if (this->events[i].date == date && this->events[i].hall.id == hallId)
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
		if (found->tickets[i].row == row && found->tickets[i].seat == seat)
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
		if (store[i].seat == seat
			&& store[i].row == row)
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
		if (this->tickets[i].code == code)
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
