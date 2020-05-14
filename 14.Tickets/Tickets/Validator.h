#ifndef COMMAND_VALIDATOR_H
#define COMMAND_VALIDATOR_H

#include <string>

class Validator
{
public:
	static bool isValidDate(std::string);
	static bool isValidInputFile(std::string);
};

#endif // !COMMAND_VALIDATOR_H
