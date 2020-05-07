#ifndef TICKET_H
#define TICKET_H

#include <string>
#include "Event.h"

class Ticket
{
public:
	std::string code;

private:
	Event* event;
	std::string note;
	int row;
	int seat;

};
#endif // !TICKET_H
