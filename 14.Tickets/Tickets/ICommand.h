#ifndef ICOMMAND_H
#define ICOMMAND_H
#include "Constants.h"

#include "Hall.h"
#include "Receiver.h"
#include <vector>
#include <string>

class ICommand
{
public:
	virtual std::string execute(const std::vector<std::string>&) = 0;
	virtual std::string toString() = 0;

protected:
	Receiver receiver;
};

#endif // !ICOMMAND_H
