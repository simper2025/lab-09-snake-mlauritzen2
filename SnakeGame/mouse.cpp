#include "mouse.h"
#include "Console.h"

point mouse::move()
{
	srand(time(0));
	loc.x = rand() % 20;
	loc.y = rand() % 20;
	return loc;
}


void mouse::setValue()
{
	value = move();
}

void mouse::draw()
{
	Console::txtPlot(loc, 69);

}
