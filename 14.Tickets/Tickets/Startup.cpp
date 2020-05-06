#include <iostream>
#include "IEngine.h"
#include "Engine.h"

int main()
{
	Engine engine; // should be an interface | single instance
	engine.start();

	return 0;
}
