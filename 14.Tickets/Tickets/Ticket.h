#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>

#include "Event.h"
#include "TicketType.h"

class Ticket
{
public:
	Ticket();
	Ticket(const int&, const int&, Event*);
	Ticket(const Ticket&);
	Ticket& operator=(const Ticket&);

	std::string code;
	Event* event;
	std::string note;
	int row;
	int seat;
	TicketType type;

	void print(std::ostream&);
private:
	void copyInternals(const Ticket&);
};
#endif // !TICKET_H
