#ifndef BOOK_COMMAND_H
#define BOOK_COMMAND_H

#include<vector>
#include "ICommand.h"

class BookCommand : public ICommand
{
public:
	BookCommand(const Receiver&);

	Receiver receiver;

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !BOOK_COMMAND_H
