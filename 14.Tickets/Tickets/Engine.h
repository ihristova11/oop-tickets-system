#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include "IEngine.h"
#include "ICommandParser.h"
#include "Hall.h"

class Engine : public IEngine
{
public:
	Engine();
	virtual ~Engine();
	Receiver receiver;
	
	virtual void start() override;
private:

	std::vector<ICommand*> commands;
	ICommandParser* parser;

	void processCommand(std::string commandAsString);
	void seed(); // seeder?
};

#endif // !ENGINE_H
