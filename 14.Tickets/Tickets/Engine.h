#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include "ICommandParser.h"
#include "Hall.h"
#include "FileWriter.h"
#include "FileReader.h"

/// <summary>
/// Singleton responsible for managing the program logic flow.
/// </summary>
class Engine
{
public:
	Engine(const Engine&) = delete;
	Engine& operator=(const Engine&) = delete;

	/// <summary>
	/// getInstance() function for exposing the static instance
	/// </summary>
	/// <returns>a static instance of type Engine</returns>
	static Engine& getInstance();	

	/// <summary>
	/// Process management entry point
	/// </summary>
	virtual void start();
private:
	Engine();
	virtual ~Engine();

	std::vector<ICommand*> commands;
	ICommandParser* parser;
	FileWriter* writer;
	FileReader* reader;
	Store store;
	bool begin = true;

	/// <summary>
	/// Executes the logic behind processing a command
	/// </summary>
	/// <param name="commandAsString">containing the command name with its parameters</param>
	void processCommand(std::string);
};

#endif // !ENGINE_H
