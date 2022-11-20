#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include <iostream>
#include <SDL.h>

class InputHandler
{
public:
    void Tick();
    void HandleKeyPress(SDL_KeyboardEvent event);
    void HandleKeyRelease(SDL_KeyboardEvent event);

    bool isKeyPressed(SDL_Scancode key);
    bool isKeyDown(SDL_Scancode key);
private:
    enum {
        BUTTON_UP = 0,
        BUTTON_PRESSED,
        BUTTON_DOWN
    };

    Uint8 buttons[SDL_NUM_SCANCODES] = {BUTTON_UP};
    Uint8 mIndex;
};

#endif
