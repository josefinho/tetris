#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "tetris_h.h"


int main () {
	screen_t* screen = create_screen();

	receive_block_L (screen);

	system("clear");
	for (int i = 0; i < 16; i++) {
		display_screen(screen);
		sleep(1);
		system("clear");
		block_drop(screen);
	}
}
