#pragma once
#include <Windows.h>
#include <conio.h>
#include "point.h"
class Console
{
private:
    static void gotoxy(int x, int y);

    static void setcolor(WORD color);
    
public:
    static void txtPlot(point item, unsigned char Color);

    
};

