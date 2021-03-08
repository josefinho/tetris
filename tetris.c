#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "tetris_h.h"

int main () {
	screen_t* screen = create_screen();

	display_screen(screen);
	free_screen(screen);
	display_screen(screen);
}
