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
		ofs << arr[i].hall.getId() << " "
			<< arr[i].hall.getRows() << " " << arr[i].hall.getSeatsPerRow() << std::endl;
		int tickets = arr[i].tickets.size();
		// write tickets on new line
		ofs << tickets << std::endl;

		for (size_t j = 0; j < tickets; j++)
		{
			ofs << arr[i].tickets[j].getCode() << std::endl;
			ofs << arr[i].tickets[j].getNote() << std::endl;
			ofs << arr[i].tickets[j].getDate() << std::endl;
			ofs << arr[i].tickets[j].getRow() << " " << arr[i].tickets[j].getSeat() << " "
				<< arr[i].tickets[j].getHallId() << " " << arr[i].tickets[j].getType() << std::endl;
		}
	}

	ofs.close();
}
