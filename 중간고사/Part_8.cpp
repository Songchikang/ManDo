#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*int x, y;

	printf("x, y 좌표를 입력하세요 : ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0) {
		printf("1사분면입니다.\n");
	}
	else if (x < 0 && y > 0) {
		printf("2사분면입니다.\n");
	}
	else if (x < 0 && y < 0) {
		printf("3사분면입니다.\n");
	}
	else if (x > 0 && y < 0) {
		printf("4사분면입니다.\n");
	}
	else if (x == 0 && y == 0) {
		printf("원점입니다.\n");
	}
	else {
		printf("잘못 입력하였습니다..\n");
	}*/

	int x, y;

	printf("x, y 좌표를 입력하세요 : ");
	scanf("%d %d", &x, &y);

	if (x > 0) {
		if (y > 0) {
			printf("1사분면입니다.\n");
		}
		else {
			printf("4사분면입니다.\n");
		}
	}
	else {
		if (y > 0) {
			printf("2사분면입니다.\n");
		}
		else {
			printf("3사분면입니다.\n");
		}
	}
}