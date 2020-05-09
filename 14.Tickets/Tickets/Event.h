#ifndef EVENT_H
#define EVENT_H

#include <string>
#include "Hall.h"
class Event
{
public:
	Event();
	Event(const std::string&, const std::string&, const Hall&);

	// not sure if public is ok?
	std::string name;
	std::string date; // todo: refactor
	Hall hall;


	int getFreeSeats();
};

#endif // !EVENT_H
