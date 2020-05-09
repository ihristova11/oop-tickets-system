#ifndef store_H
#define store_H

#include <vector>
#include "Hall.h"
#include "Ticket.h"
#include "Event.h"

class Store
{
public:
	Store();
	Store(const Store&);
	Store& operator=(const Store&);

	std::vector<Hall> halls;
	std::vector<Ticket> tickets;
	std::vector<Event> events;

	// improve these | as .Select(x=>x./...)
	// make this consts
	Hall getHallWithId(const int&);
	bool hallExists(const int&);
	bool hallFree(const std::string&, const int&);
	bool eventExists(const std::string&, const std::string&);
	bool isAvailableSeat(const std::string&, const std::string&, const int&, const int&);
	Event* getEvent(const std::string&, const std::string&); // duplicate
	int getTicketInd(std::vector<Ticket>&, const std::string&,
		const std::string&, const int&, const int&); // too many params
	Ticket* getTicketByCode(const std::string&);
private:
	void copyInternals(const Store&);
};

#endif // !store_H
