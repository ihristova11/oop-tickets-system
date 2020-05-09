#include "Ticket.h"

Ticket::Ticket() : code(""), note(""), row(0), seat(0), type(TicketType::NONPURCHASED)
{ }

Ticket::Ticket(const int& row, const int& seat)
	: code("ticket" + std::to_string(seat) + "-" + std::to_string(row)),
	note(""), row(row), seat(seat), type(TicketType::NONPURCHASED)
{ }

Ticket::Ticket(const Ticket& other)
{
	copyInternals(other);
}

Ticket& Ticket::operator=(const Ticket& other)
{
	if (this != &other)
	{
		copyInternals(other);
	}
	return *this;
}

void Ticket::print(std::ostream& out)
{
	out << "Ticket: " << this->code << std::endl;
}

void Ticket::copyInternals(const Ticket& other)
{
	this->code = other.code;
	this->note = other.note;
	this->row = other.row;
	this->seat = other.seat;
	this->type = other.type;
}
