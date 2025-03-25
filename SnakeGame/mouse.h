#pragma once
#include <ctime>
#include <cstdlib>
#include "point.h"
class mouse
{
private:
	point loc;
	point value;

public:
	point move();
	void setValue();
	void draw();
};

