#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "tetris_h.h"

int main () {
	screen_t* screen = create_screen();

	receive_block_L (screen);
	display_screen(screen);
}
