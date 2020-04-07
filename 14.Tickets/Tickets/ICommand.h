#ifndef ICOMMAND_H
#define ICOMMAND_H

#include <vector>
#include <string>

class ICommand
{
public:
	virtual void execute(std::vector<std::string>) = 0;
};

#endif // !ICOMMAND_H
