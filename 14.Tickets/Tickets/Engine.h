#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include "IEngine.h"
#include "ICommandParser.h"
#include "Hall.h"

class Engine : IEngine
{
public:

	// Inherited via IEngine
	virtual void start() override;

	// getter
	const ICommandParser* getParser() const;
private:
	std::vector<ICommand*> commands;
	ICommandParser* parser;

	void processCommand(std::string commandAsString);
	std::vector<Hall> seed();
};

#endif // !ENGINE_H
