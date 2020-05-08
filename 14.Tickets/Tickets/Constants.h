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
	const std::string PopularEventsCommandName = "popularevents";

	const std::string OpenCommandName = "open";
	const std::string CloseCommandName = "close";
	const std::string SaveCommandName = "save";
	const std::string SaveAsCommandName = "saveas";
	const std::string HelpCommandName = "help";
	const std::string ExitCommandName = "exit";

	const std::string NoHall = "No such hall exists!";

	const std::string Success = "Success!";
	const std::string Error = "Something's wrong with your command, try again!";

	const std::string CloseSuccess = "Successfully closed file!"; // should have filename too
	
	const std::string HelpRensponse = "The following commands are supported:\n>open <file> - opens < file>\n>close - closes currently opened file\n>save - saves the currently open file\n>saveas <file> - saves the currently open file in <file>\n>help - prints this information\n>exit - exists the program\n>addevent <date> <hall> <name> - adds an event\n>freeseats <date> <name> - displays info for free seats\n>book <row> <seat> <date> <name> <note> - books a ticket\n>unbook <row> <seat> <date> <name> - unbooks a booked ticket\n>buy <row> <seat> <date> <name> - buys a ticket\n>bookings <date> <name> - displays info for sold and booked tickets\n>check <code> - checks if ticket is valid\n>report <from> <to> <hall> - displays info for events";

}
#endif // !CONSTANTS_H
