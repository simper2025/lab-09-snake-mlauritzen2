#pragma once
#include <chrono>
#include <windows.h>
#include <windows.h>
#include "KeyCommand.h"
#include "Keyboard.h"
#include "snake.h"
#include "mouse.h"


using namespace std;

class GameRunner
{
private:
	KeyCommand keyPressed;
	Keyboard input;
	snake s1;
	mouse m1;

public:
	GameRunner(float speed);
	void runGame();
};

