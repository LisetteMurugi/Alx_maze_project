#include "main.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <map_file>\n", argv[0]);
        return 1;
    }

    if (init_sdl() != 0) {
        return 1;
    }

    if (!load_map(argv[1])) {
        fprintf(stderr, "Error loading map\n");
        return 1;
    }

    while (!should_quit()) {
        handle_input();
        update();
        render();
    }

    cleanup();
    return 0;
}
