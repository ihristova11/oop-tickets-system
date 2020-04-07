#ifndef ENGINE_H
#define ENGINE_H

#include "IEngine.h"
#include <string>

class Engine : IEngine
{
public:
	// Inherited via IEngine
	virtual void start() override;

private:
	void processCommand(std::string commandAsString);
	// parser here
};

#endif // !ENGINE_H
