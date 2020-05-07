#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>

namespace Constants
{
	const std::string AddEventCommandName = "addevent";
	const std::string FreeSeatsCommandName = "freeseats";
	const std::string BookCommandName = "book";
	const std::string UnbookCommandName = "unbook";
	const std::string BuyCommandName = "buy";
	const std::string BookingsCommandName = "bookings";
	const std::string CheckCommandName = "check";
	const std::string ReportCommandName = "report";

	const std::string OpenCommandName = "open";
	const std::string CloseCommandName = "close";
	const std::string SaveCommandName = "save";
	const std::string SaveAsCommandName = "saveas";
	const std::string HelpCommandName = "help";
	const std::string ExitCommandName = "exit";

	const std::string NoHall = "No such hall exists!";

	const std::string Success = "Success!";
	const std::string Error = "Something's wrong with your command, try again!";
}
#endif // !CONSTANTS_H
