#include <iostream>
#include "IEngine.h"
#include "Engine.h"

int main()
{
	Engine engine; // should be an interface
	engine.start();

	return 0;
}
