#include "Ticket.h"

Ticket::Ticket() : code(""), note(""), row(0), seat(0),
hallId(0), date(""), type(TicketType::NONPURCHASED)
{ }

Ticket::Ticket(const int& row, const int& seat, const int& hallId, const std::string& date)
	: code("ticket-" + date + "-" + std::to_string(seat) + "-" + std::to_string(row) +
		"-" + std::to_string(hallId)), note("default note"), row(row), seat(seat),
	hallId(hallId), date(date), type(TicketType::NONPURCHASED)
{ }

Ticket::Ticket(const int& row, const int& seat, const int& hallId, const std::string& date,
	const TicketType& type)
	: code("ticket-" + date + "-" + std::to_string(seat) + "-" + std::to_string(row) +
		"-" + std::to_string(hallId)),
	note("default note"), row(row), seat(seat), hallId(hallId), date(date), type(type)
{ }

Ticket::Ticket(const int& row, const int& seat, const int& hallId, const std::string& date,
	const TicketType& type, const std::string& note)
	: code("ticket-" + date + "-" + std::to_string(seat) + "-" + std::to_string(row) +
		"-" + std::to_string(hallId)),
	note(note), row(row), seat(seat), hallId(hallId), date(date), type(type)
{ }

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
	this->hallId = other.hallId;
	this->date = other.date;
	this->type = other.type;
}
