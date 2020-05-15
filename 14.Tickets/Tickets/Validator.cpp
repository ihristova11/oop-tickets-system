#include "Validator.h"

bool Validator::isValidDate(std::string date)
{
	int daysMap[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (date.size() == 10)
	{
		try
		{
			int day, month;
			std::string y = date.substr(0, 4);
			std::string m = date.substr(5, 2);
			std::string d = date.substr(8, 2);

			if (y == "2020" && m != "00" && d != "00")
			{
				month = (m.substr(1, 1).compare("0")) ? std::stoi(m.substr(1, 1)) : std::stoi(m);
				day = (d.substr(1, 1).compare("0")) ? std::stoi(d.substr(1, 1)) : std::stoi(d);
				if (day <= daysMap[month - 1])
				{
					return true;
				}
			}
		}
		catch (int)
		{
			return false;
		}
	}

	return false;
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
	return row < rows&& row >= 0;
}
