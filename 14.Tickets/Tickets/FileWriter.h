#ifndef FILE_WRITER_H
#define FILE_WRITER_H

#include <fstream>
#include <string>
#include <vector>
#include "Event.h"

/// <summary>
/// Responsible for writing to .txt files only
/// </summary>
class FileWriter
{
public:
	/// <summary>
	/// stores the last file opened
	/// </summary>
	std::string lastFile;
	
	/// <summary>
	/// writes to .txt file
	/// </summary>
	/// <param name="file">file path</param>
	/// <param name="arr">vector that stores the information to be written</param>
	void write(const std::string& file, std::vector<Event>& arr);
};

#endif // !FILE_WRITER_H
