#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double x) {
	double result = 0;
	result = x* x;
	return result;
}

int main(void) {
	double x;

	printf("정수를 입력하세요 : ");
	scanf("%lf", &x);
	printf("주어진 정수 %lf의 제곱은 %lf입니다. \n",x, square(x));
	return 0;
}