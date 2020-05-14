#include "Validator.h"

bool Validator::isValidDate(std::string)
{
	// todo: implement it
	return true;
}

bool Validator::isValidInputFile(std::string file)
{
	int size = file.size();
	std::string res = "";
	for (size_t i = 1; i <= 4; i++)
	{
		res += file[size - i];
	}

	return res == "txt.";
}