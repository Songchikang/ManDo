#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 20
#define COL 5

int random_array(int arr[][COL], int row);
int random(int min, int max);
int array_grade(int arr[][COL], int row);
int print_array(int arr[][COL], int row, int col);

int main(void) {

	srand((unsigned)time(NULL));
 
	int i, j;
	int grand_array[ROW][COL];
	 
	random_array(grand_array, ROW);
	array_grade(grand_array, ROW);
	print_array(grand_array, ROW, COL);
	 
	return 0;
}

int random_array(int arr[][COL], int row) {
	for (int i = 0; i < row; i++) {
		arr[i][0] = random(0, 50);
		arr[i][1] = random(0, 30);
		arr[i][2] = random(0, 20);

		arr[i][3] = arr[i][0] + arr[i][1] + arr[i][2];
		arr[i][4] = 0;
	}
	return 1;
}

int random(int min, int max) {
	return rand() % (max + 1 - min) + min;
}


int  array_grade(int arr[][COL], int row) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			if (arr[i][3] <= arr[j][3]) {
				arr[i][4]++;
			}
		}
	}
	return 1;
}

int print_array(int arr[][COL], int row, int col) {
	printf("학생        중간  기말  출석  합계  등수\n");
	for (int i = 0; i < row; i++) {
		printf("%s%-2d ", "Student", (i + 1));
		for (int j = 0; j < col; j++) {
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}
	return 1;
}