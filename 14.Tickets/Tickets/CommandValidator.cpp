#include "CommandValidator.h"

bool CommandValidator::isValidDate(std::string)
{
	// todo: implement it
	return true;
}

bool CommandValidator::isValidInputFile(std::string file)
{
	int size = file.size();
	std::string res = "";
	for (size_t i = 1; i <= 4; i++)
	{
		res += file[size - i];
	}

	return res == "txt.";
}