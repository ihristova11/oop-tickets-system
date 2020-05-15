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

bool Validator::isValidParametersCount(const int& expected, const int& actual)
{
	return expected == actual;
}

bool Validator::hasParameters(const int& size)
{
	return size > 1;
}

bool Validator::isMinParametersCount(const int& actual, const int& min)
{
	return min <= actual;
}

bool Validator::validateSeat(const int& seat, const int& seatsPerRow)
{
	return seat <= seatsPerRow && seat >= 0;
}

bool Validator::validateRow(const int& row, const int& rows)
{
	return row < rows && row >= 0;
}
