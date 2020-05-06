#ifndef RECEIVER_H
#define RECEIVER_H

#include <vector>
#include "Hall.h"
#include "Ticket.h"
#include "Event.h"

class Receiver
{
public:
	std::vector<Hall*> halls;
	std::vector<Ticket*> tickets;
	std::vector<Event*> events;
};

#endif // !RECEIVER_H
