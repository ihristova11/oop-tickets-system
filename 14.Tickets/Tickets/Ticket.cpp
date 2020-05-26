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

TicketType Ticket::getType() const
{
	return this->type;
}

int Ticket::getRow() const
{
	return this->row;
}

int Ticket::getSeat() const
{
	return this->seat;
}

int Ticket::getHallId() const
{
	return this->hallId;
}

std::string Ticket::getDate() const
{
	return this->date;
}

std::string Ticket::getCode() const
{
	return this->code;
}

std::string Ticket::getNote() const
{
	return this->note;
}

void Ticket::setType(const TicketType& type)
{
	this->type = type;
}

void Ticket::setSeat(const int& seat)
{
	this->seat = seat;
}

void Ticket::setRow(const int& row)
{
	this->row = row;
}

void Ticket::setHallId(const int& hallId)
{
	this->hallId = hallId;
}

void Ticket::setCode(const std::string& code)
{
	this->code = code;
}

void Ticket::setNote(const std::string& note)
{
	this->note = note;
}

void Ticket::setDate(const std::string& date)
{
	this->date = date;
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
