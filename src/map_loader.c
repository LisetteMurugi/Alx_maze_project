#include "main.h"

#define MAP_WIDTH 8
#define MAP_HEIGHT 8

int map[MAP_WIDTH][MAP_HEIGHT];

int load_map(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        fprintf(stderr, "Error: could not open map file\n");        return 0;
    }

    for (int i = 0; i < MAP_HEIGHT; i++) {
        for (int j = 0; j < MAP_WIDTH; j++) {
            fscanf(file, "%d", &map[i][j]);
        }
    }

    fclose(file);
    return 1;
}
