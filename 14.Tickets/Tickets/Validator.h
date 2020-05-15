#ifndef COMMAND_VALIDATOR_H
#define COMMAND_VALIDATOR_H

#include <string>

class Validator
{
public:
	static bool isValidDate(std::string);
	static bool isValidInputFile(std::string);
	static bool isValidParametersCount(const int&, const int&);
	static bool hasParameters(const int&);
	static bool isMinParametersCount(const int&, const int&);
	static bool validateSeat(const int&, const int&);
	static bool validateRow(const int&, const int&);
};

#endif // !COMMAND_VALIDATOR_H
