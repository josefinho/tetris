#include <stdio.h>
#include <stdlib.h>

#include "tetris_blocks.h"

#define SIDE 3

char** create_matrix_3X3 () {
	char **mat = malloc(SIDE * sizeof(char*));

	for (int i = 0; i < SIDE; i++) {
		mat[i] = malloc (SIDE * sizeof(char));
	}

	return mat;
}

char** generate_block_L () {
	char** L = create_matrix_3X3();

	L[0][0] = 'O';
	L[1][0] = 'O';
	L[2][0] = 'O';
	L[2][1] = 'O';
	//L->dimensions[][] = ;

	return L;	
}
