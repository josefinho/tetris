#include <stdio.h>
#include <stdlib.h>

#include "tetris_screen.h"
#include "tetris_blocks.h"

#define SCREEN_HIGHT 20 //Matrix rows amount
#define SCREEN_WIDTH 22 //Matrix columns amount


typedef struct screen {
	char dimensions[SCREEN_HIGHT][SCREEN_WIDTH];
} screen_t;

screen_t* create_screen () {
	screen_t* screen = malloc (sizeof(screen_t));

	for (int i = 0; i < SCREEN_HIGHT; i++) {
		for (int j = 0; j < SCREEN_WIDTH; j++) {
			if (i == 0 || i == SCREEN_HIGHT - 1 || j == 0 || j == SCREEN_WIDTH - 1) {
				screen->dimensions[i][j] = 'X';
			} else {
				screen->dimensions[i][j] = ' ';
			}
		}
	}

	return screen;
}

void free_screen (screen_t* screen) {
	free(screen);
	screen = NULL;
}

void display_screen (screen_t* screen) {

	for (int i = 0; i < SCREEN_HIGHT; i++) {
		for (int j = 0; j < SCREEN_WIDTH; j++) {
			printf ("%c", screen->dimensions[i][j]);
		}
		putchar('\n');
	}
}

void receive_block_L (screen_t* screen) {
	char** L = generate_block_L();

	for (int i = 0; i < SIDE; i++) {
		for (int j = 0; j < SIDE; j++) {
			if (L[i][j] == 'O') {
				screen->dimensions[i + 1][j + 11] = L[i][j];
			}
		}
	}
}
