# YASIR-Yet-Another-SDL-Input-Reader-

Simple SDL Input Handler that's lightweight and easy to use. It also has a distinction between single key presses and key presses over multiple frames. You will need to set the Tick function to execute after the input has been gathered for this to work properly.
The following is an example of how to set it up:

```
        while(SDL_PollEvent(&e)){
            switch(e.type){
                case SDL_KEYDOWN:
                    inputHandler.HandleKeyPress(e.key);
                    break;
                case SDL_KEYUP:
                    inputHandler.HandleKeyRelease(e.key);
                    break;
```
