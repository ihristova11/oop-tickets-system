#include "FileWriter.h"

template <typename T>
void FileWriter::writeBinary(const T* first, const T* last, std::ostream& out)
{
	out.write(reinterpret_cast<const char*>(first), (last - first) * sizeof(T));
}