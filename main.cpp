#include <iostream>
#include <SDL.h>

int main(int argc, char* argv[])
{

    /* Window */
    constexpr int window_width = 1280;
    constexpr int window_height = 720;

    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        std::cerr << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_CreateWindowAndRenderer(window_width, window_height, 0, &window, &renderer);

    /* Clear the window to black */
    SDL_SetRenderDrawColor(renderer,0,0,0, 255);
    SDL_RenderClear(renderer);

    /* Render a white point in the middle of the window */
    // SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    // SDL_RenderDrawPoint(renderer, window_width/2, window_height/2);

    SDL_SetRenderDrawColor(renderer,0,255,0,255);
    SDL_Rect rect;
    rect.w = 200;
    rect.h = 200;
    rect.y = window_height/2 - 100;
    rect.x = window_width/2 - 100;
    SDL_RenderFillRect(renderer, &rect);

    SDL_SetRenderDrawColor(renderer,255,0,0,255);
    SDL_Rect rect2;
    rect2.w = 200;
    rect2.h = 200;
    rect2.y = window_height/2 - 100;
    rect2.x = window_width/2 - 100 - 300;
    SDL_RenderFillRect(renderer, &rect2);

    SDL_SetRenderDrawColor(renderer,0,0,255,255);
    SDL_Rect rect3;
    rect3.w = 200;
    rect3.h = 200;
    rect3.y = window_height/2 - 100;
    rect3.x = window_width/2 - 100 + 300;
    SDL_RenderFillRect(renderer, &rect3);


    SDL_RenderPresent(renderer);

    SDL_Delay(5000);
    SDL_Quit();
    return 0;
}
