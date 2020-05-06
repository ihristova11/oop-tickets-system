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

	virtual void start() override;
private:
	std::vector<Hall*> halls;
	std::vector<ICommand*> commands;
	ICommandParser* parser;

	void processCommand(std::string commandAsString);
	std::vector<Hall> seed();
};

#endif // !ENGINE_H
