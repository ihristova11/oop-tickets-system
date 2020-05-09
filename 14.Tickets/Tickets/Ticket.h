#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>

#include "TicketType.h"

class Ticket
{
public:
	Ticket();
	Ticket(const int&, const int&);
	Ticket(const Ticket&);
	Ticket& operator=(const Ticket&);

	std::string code;
	std::string note;
	int row;
	int seat;
	TicketType type;

	void print(std::ostream&);
private:
	void copyInternals(const Ticket&);
};
#endif // !TICKET_H
