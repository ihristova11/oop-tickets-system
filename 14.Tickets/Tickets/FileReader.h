#ifndef FILE_READER_H
#define FILE_READER_H

#include <string>
#include <vector>
#include <iostream>

class FileReader
{
public:
	template <typename T>
	int countRecords(std::string file, const std::vector<T>&);

	template <typename T>
	void loadFile(std::string file, std::vector<T>& arr);
};

#endif // !FILE_READER_H

