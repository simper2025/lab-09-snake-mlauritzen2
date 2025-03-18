#include "Keyboard.h"



KeyCommand Keyboard::lastInput()
{
#define key_UP 72
#define key_DOWN 80
#define key_LEFT 75
#define key_RIGHT 77
#define key_ESCAPE 27
    if (_kbhit())
    {
        int keypress = _getch();
        switch (keypress)
        {
        case key_LEFT:
            return KeyCommand::left;
            break;

        case key_RIGHT:
            return KeyCommand::right;
            break;

        case key_UP:
            return KeyCommand::up;
            break;

        case key_DOWN:
            return KeyCommand::down;
            break;

        case key_ESCAPE:
            return KeyCommand::quit;
            break;

        default:
            return KeyCommand::none;
            break;
        }
    }

}
