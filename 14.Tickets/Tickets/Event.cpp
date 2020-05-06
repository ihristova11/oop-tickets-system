#include "Event.h"

Event::Event(const std::string& name, 
	const std::string& date, 
	const Hall& hall) 
	: name(name), 
	date(date), 
	hall(Hall(hall)) 
{
}
