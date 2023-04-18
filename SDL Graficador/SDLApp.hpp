#ifndef SDL_APP_H
#define SDL_APP_H

#include <SDL2/SDL.h>

class SDLApp {
public:
    SDLApp();

    int OnExecute();
    bool OnInit();
    void OnEvent(SDL_Event *event);
    void OnLoop();
    void OnRender();
    void OnExit();

    void drawAxes();
    void drawGrid();

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning;
};

#endif
