#ifndef FILE_READER_H
#define FILE_READER_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "Event.h"

class FileReader
{
public:
	void read(std::string file, std::vector<Event>& arr);	
};

#endif // !FILE_READER_H

