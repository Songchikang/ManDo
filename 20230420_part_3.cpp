#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, i;

	printf("정수를 입력하세요 : ");
	scanf("%d", &a);

	printf("약수 : ");

	for (i = 1; i <= a;  i++) {
		if (a % i == 0) {
			printf("%d ", i);
		}	
	}
	return 0;
}