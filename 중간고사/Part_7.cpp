#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*int a, b, c, min;
	
	printf("정수를 3개 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b && a < c) {
		printf("가장 작은 수는 %d입니다.\n", a);
	}
	else if (b < a && b < c) {
		printf("가장 작은 수는 %d입니다.\n", b);
	}
	else if (c < a && c < b) {
		printf("가장 작은 수는 %d입니다.\n", c);
	}
	else {
		printf("입력이 잘못되었습니다.\n");
	}*/

	int a, b, c, min;

	printf("정수를 3개 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (b > c) {
			min = c;
		}
		else {
			min = b;
		}
	}
	else {
		if (a < c) {
			min = a;
		}
		else {
			min = c;
		}
	}
	printf("가장 작은 수는 %d입니다.\n", min);
}