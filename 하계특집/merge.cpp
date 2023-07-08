#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int arr[], int cnt);
void sorting_array(int a[], int cnt);
void merge_array(int a[], int b[], int c[], int size);
void exclude_duplicate(int arr[], int change[], int cnt);

void init_array(int arr[], int cnt, int default_val);

int main(void) {
	srand((unsigned)time(NULL));

	int a[50];
	int b[50];
	int c[100];
	int d[100];
	int i, j, size;

	init_array(a, 50, -1);
	init_array(b, 50, -1);
	init_array(c, 100, -1);
	init_array(d, 100, -1);

 
	for (i = 0; i < 10; i++) {
		a[i] = rand() % 100;
	}
	printf("Orginal A  \n");
	print_array(a, 10);

	sorting_array(a, 10);

	printf("sorting A  \n");
	print_array(a, 10);

  
	for (i = 0; i < 10; i++) {
		b[i] = rand() % 100;
	}

	printf("Orginal B  \n");
	print_array(b, 10);

	sorting_array(b, 10);

	printf("sorting B  \n");
	print_array(b, 10);

	merge_array(a, b, c, 20);
	printf("Merge C  \n");
	print_array(c, 20);

	exclude_duplicate(c, d,  20);
	printf("Exclude duplicate  \n");
	print_array(d, 20);
	return 0;
}

void init_array(int arr[], int cnt, int default_val) {

	for (int i = 0; i < cnt; i++) {
		arr[i] = default_val;
	}

}

void print_array(int arr[], int cnt) {

	for (int i = 0; i < cnt; i++) {
		printf("%4d ", arr[i]);
	}
	printf("\n");

}
void sorting_array(int arr[], int cnt) {
	int i, j, temp, min;
	for (i = 0; i < cnt - 1; i++) {
		min = i;
		for (j = i + 1; j < 10; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
} 

void exclude_duplicate(int arr[], int change[], int cnt) {
	int val = 0;
	int idx = 0;
	val = -1;

	for (int i = 0; i < cnt; i++) {
		if (val != arr[i]) {
			change[idx++] = arr[i];
			val = arr[i];
		}
	}
}

void merge_array(int a[], int b[], int c[], int size) {
	int j = 0;
	int k = 0;

	for (int i = 0; i < size; i++) {
		if (j < size / 2 && k < size / 2) {
			if (a[j] < b[k]) {
				c[i] = a[j++];
			}
			else {
				c[i] = b[k++];
			}
		}
		else if (j == size / 2) {
			c[i] = b[k++];
		}
		else if (k == size / 2) {
			c[i] = a[j++];
		}
	}
}