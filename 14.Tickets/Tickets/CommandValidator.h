#ifndef COMMAND_VALIDATOR_H
#define COMMAND_VALIDATOR_H
#include <string>
class CommandValidator
{
public:
	bool isValidDate(std::string);
	bool isValidInputFile(std::string);
	bool isTxt();
};

#endif // !COMMAND_VALIDATOR_H
