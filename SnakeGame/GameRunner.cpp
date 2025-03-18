#include "GameRunner.h"
#include "point.h"
#include "mouse.h"

GameRunner::GameRunner(float speed)
{
    mouse m1;
    m1.move();

}

void GameRunner::runGame()
{
    chrono::time_point<chrono::system_clock> runTime;
    chrono::time_point<chrono::system_clock> currentTime;
    runTime = std::chrono::system_clock::now();
    Sleep(300);

    point playerloc = { 0, 10 };
    KeyCommand direction;
    int length = 5;
    KeyCommand keypress = input.lastInput();

    //Loop to start drawing and playing.
    while (keypress != KeyCommand::quit) {

    direction = input.lastInput();

    currentTime = chrono::system_clock::now();

    double elapsedTime = chrono::duration_cast<chrono::milliseconds>(currentTime - runTime).count();
    if (elapsedTime > 0.3 * 1000) {
        runTime = chrono::system_clock::now();

        //Most of your game logic goes here.

        //txtPlot(playerloc, 31);

       // setcolor(15);
        //gotoxy(1, 21);
       
        _cprintf("Length: %i", length);


    }

    Sleep(10);
    }
}
