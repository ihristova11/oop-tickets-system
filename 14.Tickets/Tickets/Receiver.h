#ifndef RECEIVER_H
#define RECEIVER_H

#include <vector>
#include "Hall.h"
#include "Ticket.h"
#include "Event.h"

class Receiver
{
public:
	Receiver();
	Receiver(const Receiver&);
	Receiver& operator=(const Receiver&);

	std::vector<Hall> halls;
	std::vector<Ticket> tickets;
	std::vector<Event> events;

	Hall* getHallWithId(const int&);
	Event* getEvent(const std::string&, const std::string&);
	void addEvent(const std::string&, const std::string&, const int&);

private:
	void copyInternals(const Receiver&);
};

#endif // !RECEIVER_H
