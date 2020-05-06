#ifndef EVENT_H
#define EVENT_H

#include <string>

class Event
{
public:
	Event(const std::string&, const std::string&);

private:
	std::string name;
	std::string date; // todo: refactor
};

#endif // !EVENT_H
