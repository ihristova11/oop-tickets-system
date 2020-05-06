#ifndef HALL_H
#define HALL_H

#include "Event.h"

#include <string>
#include <vector>

class Hall
{
public:
	Hall(const int&);

	std::vector<Event*> events;
	
	int getId() const;
	void addEvent(const std::string&, const std::string&);

private:
	unsigned int id;
	unsigned int rows;
	unsigned int seatsPerRow;
};

#endif // !HALL_H
