#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n,a;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	do {
			printf("%d", n % 10);
			n = n / 10;

	} while (n != 0); 

	return 0;
}
