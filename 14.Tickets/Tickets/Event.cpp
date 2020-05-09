#include "Event.h"

Event::Event() : name("default"), date("2020-08-08"), hall(Hall(1))
{ }

Event::Event(const std::string& name,
	const std::string& date, 
	const Hall& hall) 
	: name(name), 
	date(date), 
	hall(Hall(hall)) 
{
}

int Event::getFreeSeats()
{
	//this->hall // get free seats in a hall ( should maintain a record for that)
	return 0;
}
