#pragma once
#include <Windows.h>
#include <conio.h>
#include "point.h"
#include <string>
using namespace std;

class Console
{
private:
    static void gotoxy(int x, int y);

    static void setcolor(WORD color);

    
public:
    static void writeText(point item, unsigned char Color, string text);
    static void txtPlot(point item, unsigned char Color);

    
};

