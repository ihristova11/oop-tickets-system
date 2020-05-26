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

	TicketType getType() const;
	int getRow() const;
	int getSeat() const;
	int getHallId() const;
	std::string getDate() const;
	std::string getCode() const;
	std::string getNote() const;

	void setType(const TicketType&);
	void setSeat(const int&);
	void setRow(const int&);
	void setHallId(const int&);
	void setCode(const std::string&);
	void setNote(const std::string&);
	void setDate(const std::string&);

	void print(std::ostream&);

private:
	std::string code;
	std::string note;
	int row;
	int seat;
	int hallId;
	std::string date;
	TicketType type;

private:
	void copyInternals(const Ticket&);
};
#endif // !TICKET_H
