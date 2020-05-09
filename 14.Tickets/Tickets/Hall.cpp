#include "Hall.h"

Hall::Hall() : id(0), rows(0), seatsPerRow(0)
{ }

Hall::Hall(const int& id) : id(id), rows(0), seatsPerRow(0)
{ }

Hall::Hall(const int& id, const int& rows, const int& seats)
	: id(id), rows(rows), seatsPerRow(seats)
{ }

Hall::Hall(const Hall& other)
{
	this->id = other.id;
	this->rows = other.rows;
	this->seatsPerRow = other.seatsPerRow;
}

int Hall::getId() const
{
	return this->id;
}
