#include <stdio.h>
#include <stdlib.h>

char** alloca_mat (int l, int c) {
	char** mat = malloc(l * sizeof(char*));

	for (int i = 0; i < l; i++) {
		mat[i] = malloc(c * sizeof(char));
	}

	return mat;
}
int main () {
	char **mat = alloca_mat(4, 4);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mat[i][j] = 'X';
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
				printf("%c", mat[i][j]);
		}
		putchar('\n');
	}

}
