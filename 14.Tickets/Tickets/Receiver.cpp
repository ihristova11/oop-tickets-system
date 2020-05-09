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

Hall Receiver::getHallWithId(const int& hallId)
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

Ticket* Receiver::getTicket(const int& row, const int& seat,
	const std::string& date, const std::string& name)
{
	Ticket* found = nullptr;
	/*for (size_t i = 0; i < this->tickets.size(); i++)
	{
		if (this->tickets[i].row == row
			&& this->tickets[i].seat == seat
			&& this->tickets[i].event->date == date
			&& this->tickets[i].event->name == name)
		{
			found = &this->tickets[i];
		}
	}*/
	return found;
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

void Receiver::buyTicket(const int& row, const int& seat,
	const std::string& name, const std::string& date)
{
	// find the event
	Event* event = this->getEvent(date, name);
	// check if the seat is free

	//if (event != nullptr)
	//{
	//	for (size_t i = 0; i < this->tickets.size(); i++)
	//	{
	//		if (this->tickets[i].event == event
	//			&& this->tickets[i].row == row
	//			&& this->tickets[i].seat == seat)
	//		{
	//			// can't buy this ticket
	//			throw "This seat is not free";
	//		}
	//	}
	//	Ticket t = Ticket(row, seat, event);
	//	t.type = TicketType::PURCHASED;

	//	this->tickets.push_back(t);
	//}
	//else
	//{
	//	// no such event, can't sell tickets for it
	//}
}

void Receiver::copyInternals(const Receiver& other)
{
	this->halls = other.halls;
	this->events = other.events;
	this->tickets = other.tickets;
}
