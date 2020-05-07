#include "Receiver.h"

Receiver::Receiver() // todo
{ }

Receiver::Receiver(const Receiver& other)
{
	copyInternals(other);
}

Receiver& Receiver::operator=(const Receiver& other)
{
	if (this != &other)
	{
		copyInternals(other);
	}
	return *this;
}

Hall* Receiver::getHallWithId(const int& hallId)
{
	Hall* hall = nullptr;

	//find hall with that name
	for (size_t i = 0; i < this->halls.size(); i++)
	{
		if (this->halls[i].getId() == hallId) // what if there is no such hall?
		{
			hall = &(this->halls[i]);
		}
	}

	return hall;
}

Event* Receiver::getEvent(const std::string&, const std::string&)
{
	return nullptr;
}

void Receiver::addEvent(const std::string&, const std::string&, const int&)
{
}

void Receiver::copyInternals(const Receiver& other)
{
	this->halls = other.halls;
	this->events = other.events;
	this->tickets = other.tickets;
}
