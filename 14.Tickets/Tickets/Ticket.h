#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>

#include "TicketType.h"

/// <summary>
/// Ticket model containing information for code, note, row, seat, hall, date, etc.
/// </summary>
class Ticket
{
public:
	Ticket();
	Ticket(const int&, const int&, const int&, const std::string&);
	Ticket(const int&, const int&, const int&, const std::string&, const TicketType&);
	Ticket(const int&, const int&, const int&, const std::string&, const TicketType&, const std::string&);
	Ticket(const Ticket&);
	Ticket& operator=(const Ticket&);

	std::string code;
	std::string note;
	int row;
	int seat;
	int hallId;
	std::string date;
	TicketType type;

	void print(std::ostream&);
private:
	void copyInternals(const Ticket&);
};
#endif // !TICKET_H
