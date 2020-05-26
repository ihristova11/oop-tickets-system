#ifndef BOOKINGS_COMMAND_H
#define BOOKINGS_COMMAND_H
#include "ICommand.h"
#include "Validator.h"

/// <summary>
/// BookingsCommand displays information for booked tickets for a given date and event
/// </summary>
class BookingsCommand : public ICommand
{
public: 
	BookingsCommand(Store*);

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !BOOKINGS_COMMAND_H