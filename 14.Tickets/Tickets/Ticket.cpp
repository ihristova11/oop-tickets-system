#include "Ticket.h"

Ticket::Ticket() : code(""), note(""), row(0), seat(0), type(TicketType::NONPURCHASED)
{ }

Ticket::Ticket(const int& row, const int& seat)
	: code("default ticket"), // + std::to_string(seat) + "-" + std::to_string(row)
	note("default note"), row(row), seat(seat), type(TicketType::NONPURCHASED)
{ }

Ticket::Ticket(const int& row, const int& seat,
	const TicketType& type)
	: code("default ticket"), // + std::to_string(seat) + "-" + std::to_string(row)
	note("default note"), row(row), seat(seat), type(type)
{ }

Ticket::Ticket(const int& row, const int& seat, 
	const TicketType& type, const std::string& note)
	:code("default ticket"), // + std::to_string(seat) + "-" + std::to_string(row)
	note(note), row(row), seat(seat), type(type)
{
}

Ticket::Ticket(const Ticket& other)
{
	this->copyInternals(other);
}

Ticket& Ticket::operator=(const Ticket& other)
{
	if (this != &other)
	{
		this->copyInternals(other);
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
