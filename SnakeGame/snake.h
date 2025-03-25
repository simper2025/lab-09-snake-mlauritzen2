#pragma once
#include "point.h"
#include "Keyboard.h"
#include "Console.h"
#include <vector>

using namespace std;
class snake
{
private:
	Keyboard key;
	point playerloc;
	point playerdir;
	vector<point> tail;
	int length;

public:
	snake();
	void move(KeyCommand lastKey);
	int getLength();
	void draw();
};

