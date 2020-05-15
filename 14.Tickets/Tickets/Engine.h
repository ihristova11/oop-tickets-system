#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include "ICommandParser.h"
#include "Hall.h"
#include "FileWriter.h"
#include "FileReader.h"

class Engine
{
public:
	Engine(const Engine&) = delete;
	Engine& operator=(const Engine&) = delete;

	static Engine& getInstance();
	Store store;
	
	virtual void start();
private:
	Engine();
	virtual ~Engine();

	std::vector<ICommand*> commands;
	ICommandParser* parser;
	FileWriter* writer;
	FileReader* reader;

	void processCommand(std::string);
	void seed();
};

#endif // !ENGINE_H
