#ifndef HALL_H
#define HALL_H

#include <string>
#include <vector>

/// <summary>
/// Hall model stores information for id, rows and seats per row
/// </summary>
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
