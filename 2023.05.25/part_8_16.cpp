#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double  oil(int n) {
	float val = 1;
	for (int i = 0; i < n; i++) {
		val *= (i + 1);
	}
	return 1/val;
}

float factorial(int val) {
	float e = 0;

	// e = 1 + 1/1! + 1/2! + 1/3!  ... 1/n!; 
	for (int i = 0; i < val; i++) {
		e = e + oil(i);
	}
	return e;
}

int main(void) {

	int input = 0;

	for (;;) {
		printf("������ ����ұ�� : ");
		scanf("%d", &input);

		printf("���Ϸ��� ���� %f�Դϴ�.\n", factorial(input));

		break;
	}
}