#include "inputreader.h"

///<summary>
///To be called every frame after the internal game logic is done
///</summary>
void InputHandler::Tick()
{
    //if the last key pressed has not been released, the register it as being held down
    if(buttons[mIndex] == BUTTON_PRESSED){
        buttons[mIndex] = BUTTON_DOWN;
    }
}

void InputHandler::HandleKeyPress(SDL_KeyboardEvent event)
{
    SDL_Scancode sc = event.keysym.scancode;
    Uint8& state = buttons[sc];
    if(state == BUTTON_UP) state = BUTTON_PRESSED;

    //set the last key pressed
    mIndex = sc;
}

void InputHandler::HandleKeyRelease(SDL_KeyboardEvent event)
{
    SDL_Scancode sc = event.keysym.scancode;
    Uint8& state = buttons[sc];
    state = BUTTON_UP;
}

///<summary>
///Returns true if key was pressed once
///</summary>
bool InputHandler::isKeyPressed(SDL_Scancode key)
{
    Uint8 state = buttons[key];
    return (state == BUTTON_PRESSED);
}

///<summary>
///Returns true if key is held down
///</summary>
bool InputHandler::isKeyDown(SDL_Scancode key)
{
    Uint8 state = buttons[key];
    return (state != BUTTON_UP);
}
