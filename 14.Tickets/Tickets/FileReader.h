#ifndef FILE_READER_H
#define FILE_READER_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "Event.h"

/// <summary>
/// Responsible for reading from .txt files only
/// </summary>
class FileReader
{
public:
	/// <summary>
	/// reads from .txt file
	/// </summary>
	/// <param name="file">file path</param>
	/// <param name="arr">vector in which the information is stored</param>
	void read(std::string file, std::vector<Event>& arr);	
};

#endif // !FILE_READER_H

