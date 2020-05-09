#include "FileReader.h"

void FileReader::read(std::string file, std::vector<Event>& arr)
{
	int events = 0;
	std::ifstream ifs;
	ifs.open(file, std::ios::in);
	ifs >> events; // read events number
	for (size_t i = 0; i < events; i++)
	{
		arr.push_back(Event());
		ifs.ignore();
		std::getline(ifs, arr[i].date);
		std::getline(ifs, arr[i].name);
		ifs >> arr[i].hall.id;
		ifs.get();
		ifs >> arr[i].hall.rows;
		ifs.get();
		ifs >> arr[i].hall.seatsPerRow;
		int tickets = 0;
		ifs >> tickets;
		for (size_t j = 0; j < tickets; j++)
		{
			arr[i].tickets.push_back(Ticket());
			ifs.ignore();
			std::getline(ifs, arr[i].tickets[j].code);
			std::getline(ifs, arr[i].tickets[j].note);
			ifs >> arr[i].tickets[j].row;
			ifs.get();
			ifs >> arr[i].tickets[j].seat;
			ifs.get();
			int type = 0;
			ifs >> type;
			arr[i].tickets[j].type = static_cast<TicketType>(type);
		}
	}
	ifs.close();
}
