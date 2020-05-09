#ifndef FILE_READER_H
#define FILE_READER_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

class FileReader
{
public:
	//template <typename T>
	void loadFile(std::string file, std::vector<Event>& arr)
	{
		int n = countRecords(file, arr);
		if (n != 0)
		{
			Event* temp = new Event[n];
			std::ifstream ifs;
			ifs.open(file, std::ios::in | std::ios::binary);
			if (!ifs)
			{
				// update the error message
				std::cerr << "No players to choose from! Create a new player." << std::endl;
			}
			ifs.seekg(0);
			ifs.read((char*)&*temp, sizeof(Event) * n);

			for (size_t i = 0; i < n; i++)
			{
				arr.push_back(temp[i]);
			}
			ifs.close();
			delete[] temp;
		}
	}

private:
	template <typename T>
	int countRecords(std::string file, const std::vector<T>&)
	{
		int n;
		std::ifstream ifs;
		ifs.open(file, std::ios::in | std::ios::binary);
		if (!ifs)
		{
			// update the message
			std::cerr << "No players to choose from! Create a new player." << std::endl;
			return 0;
		}
		ifs.seekg(0, std::ios::end);

		n = ifs.tellg() / sizeof(T);
		ifs.close();
		return n;
	}
};

#endif // !FILE_READER_H

