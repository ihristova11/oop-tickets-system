#include "Ticket.h"

Ticket::Ticket(const int& row, const int& seat,
	Event* event)
	: code("ticket" + event->name + "-" + event->date +
		std::to_string(seat) + "-" + std::to_string(row)),
	event(event), note(""), row(row), seat(seat), type(TicketType::NONPURCHASED)
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
	this->event = other.event;
	this->note = other.note;
	this->row = other.row;
	this->seat = other.seat;
	this->type = other.type;
}
