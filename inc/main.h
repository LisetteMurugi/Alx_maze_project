#ifndef MAIN_H
#define MAIN_H

#include <SDL2/SDL.h>
#include <stdio.h>
#include <math.h>

/* Map dimensions */
#define MAP_WIDTH 8
#define MAP_HEIGHT 8
#define TILE_SIZE 32 // Assuming each tile is 32x32 pixels

/* Raycasting */
void update();

/* Input handling */
int should_quit();
void handle_input();

/* Rendering */
int init_sdl();
void render();
void cleanup();

/* Map loading */
int load_map(const char *filename);

/* Player movement */
void move_player(int *player_x, int *player_y, float *player_angle, const Uint8 *key_state, int map[MAP_WIDTH][MAP_HEIGHT]);

#endif /* MAIN_H */
