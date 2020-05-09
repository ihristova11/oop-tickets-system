#ifndef HALL_H
#define HALL_H

#include <string>
#include <vector>

class Hall
{
public:
	Hall();
	Hall(const int&);
	Hall(const int&, const int&, const int&);
	Hall(const Hall&);
	// destructor is not needed here

	int id;
	int rows;
	int seatsPerRow;
};

#endif // !HALL_H
