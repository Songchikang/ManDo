#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, tot = 0;
	do {
		printf("정수 입력:");
		scanf("%d", &num);
		tot += num;
	} while (num != 0);
	printf("total = %d\n", tot);
}