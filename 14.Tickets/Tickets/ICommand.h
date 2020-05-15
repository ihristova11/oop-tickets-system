#ifndef ICOMMAND_H
#define ICOMMAND_H
#include "Constants.h"

#include "Hall.h"
#include "Store.h"
#include <vector>
#include <string>

class ICommand
{
public:
	virtual std::string execute(const std::vector<std::string>&) = 0;
	virtual std::string toString() = 0;
protected:
	Store* store = nullptr;
};

#endif // !ICOMMAND_H
