#include "main.h"

int quit = 0;

int should_quit() {
    return quit;
}

void handle_input() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            quit = 1;
        }
        if (event.type == SDL_KEYDOWN) {
            if (event.key.keysym.sym == SDLK_ESCAPE) {
                quit = 1;
            }
            // Add movement and rotation handling here
        }
    }
}
