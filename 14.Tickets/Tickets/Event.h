#ifndef EVENT_H
#define EVENT_H

#include <string>

#include "Hall.h"
#include "Ticket.h"
class Event
{
public:
	Event();
	Event(const std::string&, const std::string&, const Hall&);
	Event(const std::string&, const std::string&, const Hall&, std::vector<Ticket>&);
	Event(const Event&);
	Event& operator=(const Event&);

	~Event(); // update this

	std::string name;
	std::string date; // todo: refactor ? 
	Hall hall;
	std::vector<Ticket> tickets;


	int getFreeSeats();

private:
	void copyInternals(const Event&);
};

#endif // !EVENT_H
