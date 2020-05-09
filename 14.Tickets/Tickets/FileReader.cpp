#include "FileReader.h"
template<typename T>
int FileReader::countRecords(std::string file, const std::vector<T>&)
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

template<typename T>
void FileReader::loadFile(std::string file, std::vector<T>& arr)
{
	int n = countRecords(file, arr);
	if (n != 0)
	{
		T* temp = new T[n];
		std::ifstream ifs;
		ifs.open(file, std::ios::in | std::ios::binary);
		if (!ifs)
		{
			// update the error message
			std::cerr << "No players to choose from! Create a new player." << std::endl;
		}
		ifs.seekg(0);
		ifs.read((char*)&*temp, sizeof(T) * n);

		for (size_t i = 0; i < n; i++)
		{
			arr.push_back(temp[i]);
		}
		ifs.close();
		delete[] temp;
	}
}
