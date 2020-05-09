#ifndef BOOK_COMMAND_H
#define BOOK_COMMAND_H

#include<vector>
#include "ICommand.h"
#include "CommandValidator.h"

class BookCommand : public ICommand
{
public:
	BookCommand(Receiver*, CommandValidator*);

	Receiver* receiver;
	CommandValidator* validator;

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;

private:
	bool eventExists(const std::string&, const std::string&);
	bool isAvailableSeat(const std::string&, const std::string&, const int&, const int&);
	Event* getEvent(const std::string&, const std::string&);
};

#endif // !BOOK_COMMAND_H
