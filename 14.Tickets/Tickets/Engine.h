#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include "IEngine.h"
#include "ICommandParser.h"
#include "Hall.h"
#include "FileWriter.h"
#include "FileReader.h"

class Engine : public IEngine
{
public:
	Engine();
	virtual ~Engine();
	Store store;
	
	virtual void start() override;
private:

	std::vector<ICommand*> commands;
	ICommandParser* parser;
	FileWriter* writer;
	FileReader* reader;

	void processCommand(std::string commandAsString);
	void seed();
};

#endif // !ENGINE_H
