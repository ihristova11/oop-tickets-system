#ifndef HALL_H
#define HALL_H

#include <string>
#include <vector>

class Hall
{
public:
	Hall(const int&);
	Hall(const Hall&);
	
	int getId() const;

private:
	unsigned int id;
	unsigned int rows;
	unsigned int seatsPerRow;
};

#endif // !HALL_H
