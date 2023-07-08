#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

void print_array(int image[][SIZE]) {
	int r, c;
	printf("-----------------------------------\n");
	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++) {
			printf("%4d ", image[r][c]);
		}
		printf("\n");
	}
	printf("-----------------------------------\n");
	printf("\n");
}


void init_array(int arr[][SIZE], int row, int col, int inti_val) {
	int r, c;
	for (r = 0; r < row; r++) {
		for (c = 0; c < col; c++) {
			arr[r][c] = inti_val;
		}
	}
}


int main(void) {
	int image[SIZE][SIZE];
	int try_cnt = 0;
	int val = 0;
 
	srand((unsigned)time(NULL));
	init_array(image, SIZE, SIZE, -1);
	
	for (int i = 0;; i++) {
		int c = rand() % 5;
		int r = rand() % 5;
		try_cnt++;
		if (image[r][c] == -1) {
			image[r][c] = val++;
		}
		if (val == 25) {
			break;
		}
	}

	printf("½ÃµµÈ½¼ö = %d\n ", try_cnt);
	print_array(image);
	return 0;
}