//This is a frameword to allow you to focus on the game logic.
//Most of your code will go in three locations. 
//Function decalrations, game logic in runGame, and the function declarations.

#include <windows.h>
#include <conio.h>
#include <vector>
#include <ctime>
#include <chrono>
#include "point.h"
#include "KeyCommand.h"
#include "GameRunner.h"
#include "Keyboard.h"

using namespace std;

//keypress keeps track of what the last pressed key. It is global, but could be made local.
int keypress = 0;



//Add function declarations here


int main() {

    //Uncomment the next four lines to see console color options 0-255
    //for (int i = 0; i < 255; i++) {
    //    setcolor(i);
    //    _cprintf("Color option: %i. Hello, world.\n", i);
    //}

    GameRunner game(0.3);
    game.runGame();
	return 0;
}


//Put function definitions here.

