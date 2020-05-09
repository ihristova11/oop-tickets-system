#ifndef UNBOOK_COMMAND_H
#define UNBOOK_COMMAND_H
#include "ICommand.h"
#include "CommandValidator.h"

class UnbookCommand : public ICommand
{
public:
	UnbookCommand(Receiver*, CommandValidator*);

	Receiver* receiver;
	CommandValidator* validator;
	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
private:
	Event* getEvent(const std::string&, const std::string&); // duplicate, should refactor
	int getTicketInd(std::vector<Ticket>&, const std::string&, 
		const std::string&, const int&, const int&); // too many params
};

#endif // !UNBOOK_COMMAND_H
