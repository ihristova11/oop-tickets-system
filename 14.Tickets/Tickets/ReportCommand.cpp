#include "ReportCommand.h"

ReportCommand::ReportCommand(Store* store)
{
	ICommand::store = store;
}

std::string ReportCommand::execute(const std::vector<std::string>& parameters)
{
	// validate parameters
	std::string from = parameters[1];
	std::string to = parameters[2];

	if (parameters.size() >= 4) // optional parameter exists
	{
		int count = 0;
		int hallId = std::stoi(parameters[3]);

		for (Event e : this->store->events)
		{
			if (e.hall.id == hallId && e.date >= from && e.date <= to)
			{
				e.print(std::cout);
				for (Ticket ticket : e.tickets)
				{
					ticket.print(std::cout);
					++count;
				}
			}
		}

		std::cout << "HallId: " << hallId << " -> " << count << " tickets" <<std::endl;
	}
	else
	{
		int count;

		for (Hall hall : this->store->halls)
		{
			count = 0;
			std::cout << std::endl;
			for (Event e : this->store->events)
			{
				if (e.hall.id == hall.id && e.date >= from && e.date <= to)
				{
					e.print(std::cout);
					for (Ticket ticket : e.tickets)
					{
						ticket.print(std::cout);
						++count;
					}
				}
			}

			std::cout << "HallId: " << hall.id << " -> " << count << " tickets" << std::endl;
		}
	}

	return Constants::Success;
}

std::string ReportCommand::toString()
{
	return Constants::ReportCommandName;
}
