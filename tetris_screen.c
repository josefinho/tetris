#include <stdio.h>
#include <stdlib.h>

#include "tetris_screen.h"

#define SCREEN_HIGHT 20 //Matrix rows amount
#define SCREEN_WIDTH 22 //Matrix columns amount


typedef struct screen {
	char dimensions[SCREEN_HIGHT][SCREEN_WIDTH];
} screen_t;

screen_t* create_screen () {
	screen_t* screen = malloc (sizeof(screen_t));

	for (int i = 0; i < SCREEN_HIGHT; i++) {
		for (int j = 0; j < SCREEN_WIDTH; j++) {
			screen->dimensions[i][j] = 'X';
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

