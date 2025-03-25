#include "snake.h"

snake::snake()
{
	playerloc = { 0, 10 };
	playerdir = { 1, 0 };
	
	length = 5;
}

void snake::move(KeyCommand lastKey)
{
	if(lastKey == KeyCommand::down)
	{
		playerloc.y ++;
		playerloc.x;
	}
	else if (lastKey == KeyCommand::up)
	{
		playerloc.y --;
		playerloc.x;
	}
	else if (lastKey == KeyCommand::right)
	{
		playerloc.y;
		playerloc.x++;
	}
	else if (lastKey == KeyCommand::left)
	{
		playerloc.y;
		playerloc.x--;
	}
	
}

int snake::getLength()
{
	return length;
}

void snake::draw()
{
	Console::txtPlot(playerloc, 20);
}
