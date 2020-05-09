#ifndef FILE_WRITER_H
#define FILE_WRITER_H

#include <fstream>
#include <string>
#include <vector>

class FileWriter
{
public:
	//std::ofstream& out; ?


	//https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
	//https://www.youtube.com/watch?v=IiMr1jAQB78
	template <typename T>
	void write(const std::string& file, std::vector<T>& arr)
	{
		std::ofstream ofs;
		ofs.open(file, std::ios::out | std::ios::binary);
		if (!ofs)
		{
			std::cerr << "Not able to open binary!" << std::endl;
		}
		ofs.seekp(0, std::ios::beg);
		ofs.write((char*)&arr, sizeof(T) * arr.size());
		ofs.close();
		std::cout << "All changes are saved successfully in the file!" << std::endl;
		//out.write(reinterpret_cast<const char*>(first), (last - first) * sizeof(T));
	}
};

#endif // !FILE_WRITER_H
