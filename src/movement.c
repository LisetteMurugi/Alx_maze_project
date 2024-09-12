#include "main.h"
#include <math.h>

// Move player based on key input
void move_player(int *player_x, int *player_y, float *player_angle, const Uint8 *key_state, int map[MAP_WIDTH][MAP_HEIGHT]) {
    int move_speed = 1;

    int next_x = *player_x;
    int next_y = *player_y;

    // Move forward with 'W'
    if (key_state[SDL_SCANCODE_W]) {
        next_x = *player_x + move_speed * cosf(*player_angle);
        next_y = *player_y + move_speed * sinf(*player_angle);

        // Check for collisions with map
        if (map[next_x / TILE_SIZE][next_y / TILE_SIZE] == 0) {
            *player_x = next_x;
            *player_y = next_y;
        }
    }

    // Move backward with 'S'
    if (key_state[SDL_SCANCODE_S]) {
        next_x = *player_x - move_speed * cosf(*player_angle);
        next_y = *player_y - move_speed * sinf(*player_angle);

        // Check for collisions with map
        if (map[next_x / TILE_SIZE][next_y / TILE_SIZE] == 0) {
            *player_x = next_x;
            *player_y = next_y;
        }
    }

    // Rotate left with 'A'
    if (key_state[SDL_SCANCODE_A]) {
        *player_angle -= 0.05f; // Adjust rotation speed as necessary
    }

    // Rotate right with 'D'
    if (key_state[SDL_SCANCODE_D]) {
        *player_angle += 0.05f; // Adjust rotation speed as necessary
    }
}
