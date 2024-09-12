CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -Iinc
LDFLAGS = -lSDL2 -lm
OBJ = obj/input_handling.o obj/main.o obj/map_loader.o obj/movement.o obj/raycasting.o obj/rendering.o
BIN = bin/alx_maze_project

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(LDFLAGS)

obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BIN)
