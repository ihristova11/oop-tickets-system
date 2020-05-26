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

	/// <summary>
	/// Finds hall by id
	/// </summary>
	/// <param name="hallId"></param>
	/// <returns>Hall</returns>
	Hall getHallWithId(const int&) const;

	/// <summary>
	/// Checks if hall exists
	/// </summary>
	/// <param name="hallId"></param>
	/// <returns>bool</returns>
	bool hallExists(const int&) const;

	/// <summary>
	/// Finds hall by id
	/// </summary>
	/// <param name="hallId"></param>
	/// <returns>Hall</returns>
	bool hallFree(const std::string&, const int&) const;

	/// <summary>
	/// Checks if event exists
	/// </summary>
	/// <param name="date"></param>
	/// <param name="name"></param>
	/// <returns>bool</returns>
	bool eventExists(const std::string&, const std::string&);

	/// <summary>
	/// Checks if seat is available
	/// </summary>
	/// <returns>bool</returns>
	bool isAvailableSeat(const std::string&,
		const std::string&, const int&, const int&);

	/// <summary>
	/// Finds event by date and name
	/// </summary>
	/// <returns>Event* or nullptr if not found</returns>
	Event* getEvent(const std::string&, const std::string&);

	/// <summary>
	/// Finds ticket index
	/// </summary>
	/// <returns>integer index</returns>
	int getTicketInd(std::vector<Ticket>&, const std::string&,
		const std::string&, const int&, const int&) const;

	/// <summary>
	/// Finds ticket by code
	/// </summary>
	/// <returns>Ticket* or nullptr if not found</returns>
	Ticket* getTicketByCode(const std::string&);
private:
	void copyInternals(const Store&);
	void seed();
};

#endif // !store_H
