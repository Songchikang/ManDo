#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("��� : ");

	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			printf("%d, ", i);
		}
	}
	return 0;
}