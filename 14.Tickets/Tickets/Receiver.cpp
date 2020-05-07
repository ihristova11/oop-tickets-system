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
			break;
		}
	}

	return hall;
}

Event* Receiver::getEvent(const std::string& date, const std::string& name)
{
	Event* event = nullptr;
	for (size_t i = 0; i < this->events.size(); i++)
	{
		if (this->events[i].date == date && this->events[i].name == name)
		{
			event = &this->events[i];
		}
	}
	return event;
}

void Receiver::addEvent(const std::string& date, const std::string& name, const int& hallId)
{
	this->events.push_back(Event(name, date, Hall(hallId)));
}

bool Receiver::checkCode(const std::string& code)
{
	bool flag = false;
	for (size_t i = 0; i < this->tickets.size(); i++)
	{
		if (this->tickets[i].code == code)
		{
			flag = true;
			break;
		}
	}
	
	return flag;
}

void Receiver::copyInternals(const Receiver& other)
{
	this->halls = other.halls;
	this->events = other.events;
	this->tickets = other.tickets;
}
