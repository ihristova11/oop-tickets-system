#include "Event.h"

Event::Event() : name("default"), date("2020-08-08"), hall(Hall(1)), tickets()
{ }

Event::Event(const std::string& name, const std::string& date, const Hall& hall)
	: name(name), date(date), hall(Hall(hall)), tickets()
{ }

Event::Event(const std::string& name, const std::string& date, const Hall& hall, std::vector<Ticket>& tickets)
	: name(name), date(date), hall(hall), tickets(tickets)
{ }

Event::Event(const Event& other)
{
	this->copyInternals(other);
}

Event& Event::operator=(const Event& other)
{
	if (this != &other)
	{
		this->copyInternals(other);
	}
	return *this;
}

Event::~Event()
{
	/*delete &hall;
	delete[]tickets;*/
}

int Event::getFreeSeats()
{
	//this->hall // get free seats in a hall ( should maintain a record for that)
	return 0;
}

void Event::copyInternals(const Event& other)
{
	this->name = other.name;
	this->date = other.date;
	this->hall = other.hall;
	this->tickets.clear();
	for (size_t i = 0; i < other.tickets.size(); i++)
	{
		tickets.push_back(other.tickets[i]);
	}
}
