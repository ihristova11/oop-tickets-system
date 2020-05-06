#include <iostream>

#include "IEngine.h"
#include "Engine.h"

int main()
{
	IEngine* engine = new Engine();
	engine->start();

	return 0;
}
