#ifndef FILE_WRITER_H
#define FILE_WRITER_H

#include <fstream>
#include <string>
#include <vector>
#include "Event.h"

class FileWriter
{
public:
	std::string lastFile;
	//https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
	//https://www.youtube.com/watch?v=IiMr1jAQB78
	//template <typename T>
	void write(const std::string& file, std::vector<Event>& arr);
};

#endif // !FILE_WRITER_H
