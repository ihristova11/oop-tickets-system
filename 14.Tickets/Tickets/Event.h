#ifndef EVENT_H
#define EVENT_H

#include <string>

#include "Hall.h"
#include "Ticket.h"

/// <summary>
/// Event model stores information as name, date, hall and tickets
/// </summary>
class Event
{
public:
	Event();
	Event(const std::string&, const std::string&, const Hall&);
	Event(const std::string&, const std::string&, const Hall&, std::vector<Ticket>&);
	Event(const Event&);
	Event& operator=(const Event&);

	std::string name;
	std::string date;
	Hall hall;
	std::vector<Ticket> tickets;

	void print(std::ostream&);

private:
	void copyInternals(const Event&);
};

#endif // !EVENT_H
