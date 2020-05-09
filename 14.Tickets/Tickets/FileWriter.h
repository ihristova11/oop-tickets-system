#ifndef FILE_WRITER_H
#define FILE_WRITER_H

#include <fstream>

class FileWriter
{
public:
	template <typename T>
	void writeBinary(const T* first, const T* last, std::ostream& out);
};

#endif // !FILE_WRITER_H
