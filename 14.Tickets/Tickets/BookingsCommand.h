#ifndef BOOKINGS_COMMAND_H
#define BOOKINGS_COMMAND_H
#include "ICommand.h"
class BookingsCommand : public ICommand
{
public: 
	BookingsCommand(const Receiver&);
	Receiver receiver;

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !BOOKINGS_COMMAND_H