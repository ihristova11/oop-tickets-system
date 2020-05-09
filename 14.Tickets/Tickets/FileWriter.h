#ifndef FILE_WRITER_H
#define FILE_WRITER_H

#include <fstream>

class FileWriter
{
public:
	//std::ofstream& out; ?


	//https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
	//https://www.youtube.com/watch?v=IiMr1jAQB78
	template <typename T>
	void write(const T* first, const T* last, std::ofstream& out)
	{

		out.write(reinterpret_cast<const char*>(first), (last - first) * sizeof(T));
	}
};

#endif // !FILE_WRITER_H
