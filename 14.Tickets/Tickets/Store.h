#ifndef store_H
#define store_H

#include <vector>
#include "Hall.h"
#include "Ticket.h"
#include "Event.h"

/// <summary>
/// Store is used as container for halls, tickets and events data during the program execution
/// </summary>
class Store
{
public:
	Store();
	Store(const Store&);
	Store& operator=(const Store&);

	std::vector<Hall> halls;
	std::vector<Ticket> tickets;
	std::vector<Event> events;

	Hall getHallWithId(const int&) const;
	bool hallExists(const int&) const;
	bool hallFree(const std::string&, const int&) const;
	bool eventExists(const std::string&, const std::string&);
	bool isAvailableSeat(const std::string&, 
		const std::string&, const int&, const int&);
	Event* getEvent(const std::string&, const std::string&) ; // duplicate
	int getTicketInd(std::vector<Ticket>&, const std::string&,
		const std::string&, const int&, const int&) const; // too many params ? 
	Ticket* getTicketByCode(const std::string&);
private:
	void copyInternals(const Store&);
	void seed();
};

#endif // !store_H
