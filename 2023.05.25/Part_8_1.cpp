#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double x) {
	double result = 0;
	result = x* x;
	return result;
}

int main(void) {
	double x;

	printf("������ �Է��ϼ��� : ");
	scanf("%lf", &x);
	printf("�־��� ���� %lf�� ������ %lf�Դϴ�. \n",x, square(x));
	return 0;
}