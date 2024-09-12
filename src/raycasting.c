#include "main.h"

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define FOV 60

// Camera and player position
float player_x = 3.0;
float player_y = 3.0;
float player_angle = 0.0;

void update() {
    // Update player position or other states
    render(); // Ensure rendering is updated
}
