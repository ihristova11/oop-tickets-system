#include <iostream>

#include "IEngine.h"
#include "Engine.h"


#include "Hall.h"
#include <fstream>

//void readBinary()
//{
//	// find binaries
//	// read binaries
//
//	std::vector<Hall> halls;
//	std::vector<Event> events;
//	std::vector<Ticket> tickets;
//
//	loadFile("halls.bin", halls);
//	loadFile("events.bin", events);
//	loadFile("tickets.bin", tickets);
//}



int main()
{
	IEngine* engine = new Engine();
	engine->start();

	//seed();
	//readBinary();
	


	return 0;
}
