#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include "IEngine.h"
#include "CommandParser.h"

class Engine : IEngine
{
public:
	// Inherited via IEngine
	virtual void start() override;

	// getter
	CommandParser getParser() const;
private:
	const std::string TerminationCommand = "exit";

	CommandParser parser;
	void processCommand(std::string commandAsString);
};

#endif // !ENGINE_H
