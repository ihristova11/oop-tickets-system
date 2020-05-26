#include "FileReader.h"
#include "Constants.h"

void FileReader::read(std::string file, std::vector<Event>& arr)
{
	bool res = true;
	int events = 0;
	int input;
	std::string line;
	std::fstream ifs;

	ifs.open(file, std::ios::in);
	if (ifs)
	{
		ifs >> events; // read events number
		for (size_t i = 0; i < events; i++)
		{
			arr.push_back(Event());
			ifs.ignore();
			std::getline(ifs, arr[i].name);
			std::getline(ifs, arr[i].date);
			ifs >> input;
			arr[i].hall.setId(input);
			ifs.get();
			ifs >> input;
			arr[i].hall.setRows(input);
			ifs.get();
			ifs >> input;
			arr[i].hall.setSeatsPerRow(input);
			int tickets = 0;
			ifs >> tickets;
			for (size_t j = 0; j < tickets; j++)
			{
				arr[i].tickets.push_back(Ticket());
				ifs.ignore();
				std::getline(ifs, line);
				arr[i].tickets[j].setCode(line);
				std::getline(ifs, line);
				arr[i].tickets[j].setNote(line);
				std::getline(ifs, line);
				arr[i].tickets[j].setDate(line);
				ifs >> input;
				arr[i].tickets[j].setRow(input);
				ifs.get();
				ifs >> input;
				arr[i].tickets[j].setSeat(input);
				ifs.get();
				ifs >> input;
				arr[i].tickets[j].setHallId(input);
				ifs.get();
				int type = 0;
				ifs >> type;
				arr[i].tickets[j].setType(static_cast<TicketType>(type));
			}
		}
	}
	else
	{
		// create new file
		ifs.open(file, std::ios::out);
	}
	ifs.close();
}
