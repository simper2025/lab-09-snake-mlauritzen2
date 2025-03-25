#include "GameRunner.h"
#include "point.h"
#include "Console.h"

GameRunner::GameRunner(float speed)
{

	m1.move();
	m1.draw();
	s1.move(KeyCommand::right);
	s1.draw();

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
	KeyCommand keypress = KeyCommand::right;;

	//Loop to start drawing and playing.
	while (keypress != KeyCommand::quit) {

		currentTime = chrono::system_clock::now();

		keypress = input.lastInput(keypress);

		double elapsedTime = chrono::duration_cast<chrono::milliseconds>(currentTime - runTime).count();
		if (elapsedTime > 0.3 * 1000) {
			runTime = chrono::system_clock::now();

			//Most of your game logic goes here.

			//txtPlot(playerloc, 31);

			s1.move(keypress);
			s1.draw();

			string info = "Length: " + to_string(s1.getLength());
			Console::writeText({ 0,20 }, 15, info);


			//_cprintf("Length: %i", length);

		}

		Sleep(10);
	}
}
