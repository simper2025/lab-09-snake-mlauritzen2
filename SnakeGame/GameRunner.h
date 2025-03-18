#pragma once
#include <chrono>
#include <windows.h>
#include <windows.h>
#include "KeyCommand.h"
#include "Keyboard.h"
using namespace std;
class GameRunner
{
private:
	KeyCommand keyPressed;
	Keyboard input;
public:
	GameRunner(float speed);
	void runGame();
};

