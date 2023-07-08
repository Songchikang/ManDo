#include <stdio.h>
#define ROW 5
#define COL 5
//#define MATRIX 5

/*
	0	1	2	3	4
	15	16	17	18	5
	14	23	24	19	6
	13	22	21	20	7
	12	11	10	9	8
*/
int print_array_all(int arr[][COL], int row, int col) {
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			printf("%5d", arr[r][c]);
		}
		printf("\n");
	}
	return 0;
}


int main(void) {
	int snail[ROW][COL];
	int repeat = 0;
	int start_row = 0;
	int start_col = 0;
	int max = ROW;
	int value = 0;
	
	if (ROW % 2 > 0) {
		repeat = ROW / 2 + 1;
	}
	else {
		repeat = ROW / 2;
	}

	for (int i = 0; i < repeat; i++) {
		start_row = i;
		start_col = i;
		for (int j = i; j < max; j++) {
			start_col = j;
			snail[start_row][start_col] = value++;
		}
		for (int j = i; j < max - 1; j++) {
			start_row++;
			snail[start_row][start_col] = value++;
		}
		for (int j = i; j < max - 1; j++) {
			start_col--;
			snail[start_row][start_col] = value++;
		}
		for (int j = i; j < max - 2; j++) {
			start_row--;
			snail[start_row][start_col] = value++;
		}
		max--;
	}
	print_array_all(snail, ROW, COL);

	printf("max value = %d\n", value);

	return 0;
}