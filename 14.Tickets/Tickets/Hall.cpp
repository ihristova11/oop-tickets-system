#include "Hall.h"

Hall::Hall(const int& id) : id(id), rows(0), seatsPerRow(0)
{ }

int Hall::getId() const
{
	return this->id;
}

void Hall::addEvent(const std::string& date, const std::string& name)
{
	this->events.push_back(new Event(date, name));
}
