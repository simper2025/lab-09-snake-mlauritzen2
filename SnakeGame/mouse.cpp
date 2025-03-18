#include "mouse.h"
#include "Console.h"

point mouse::move()
{
	srand(time(0));
	point loc;
	loc.x = rand() % 20;
	loc.y = rand() % 20;
	return loc;
}

void mouse::draw(point value)
{
	Console::txtPlot(value, 69);
}
