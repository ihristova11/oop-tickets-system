#ifndef BOOKINGS_COMMAND_H
#define BOOKINGS_COMMAND_H
#include "ICommand.h"
class BookingsCommand : public ICommand
{
	// Inherited via ICommand
	virtual void execute(std::vector<std::string>) override;
};

#endif // !BOOKINGS_COMMAND_H