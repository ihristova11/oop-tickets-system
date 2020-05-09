#include "FileWriter.h"

void FileWriter::write(const std::string& file, std::vector<Event>& arr)
{
	int events = arr.size();

	std::ofstream ofs;
	ofs.open(file, std::ios::out);
	ofs.seekp(0);
	ofs << events << std::endl; // write events number
	for (size_t i = 0; i < events; i++)
	{
		ofs << arr[i].name << std::endl;
		ofs << arr[i].date << std::endl;
		ofs << arr[i].hall.id << " "
			<< arr[i].hall.rows << " " << arr[i].hall.seatsPerRow << std::endl;
		int tickets = arr[i].tickets.size();
		// write tickets on new line
		ofs << tickets << std::endl;

		for (size_t j = 0; j < tickets; j++)
		{
			ofs << arr[i].tickets[j].code << std::endl;
			ofs << arr[i].tickets[j].note << std::endl;
			ofs << arr[i].tickets[j].date << std::endl;
			ofs << arr[i].tickets[j].row << " " << arr[i].tickets[j].seat << " " << arr[i].tickets[j].hallId << " " <<
				arr[i].tickets[j].type << std::endl;
		}

	}

	ofs.close();
}
