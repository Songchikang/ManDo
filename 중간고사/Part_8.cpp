#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*int x, y;

	printf("x, y ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0) {
		printf("1��и��Դϴ�.\n");
	}
	else if (x < 0 && y > 0) {
		printf("2��и��Դϴ�.\n");
	}
	else if (x < 0 && y < 0) {
		printf("3��и��Դϴ�.\n");
	}
	else if (x > 0 && y < 0) {
		printf("4��и��Դϴ�.\n");
	}
	else if (x == 0 && y == 0) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("�߸� �Է��Ͽ����ϴ�..\n");
	}*/

	int x, y;

	printf("x, y ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &x, &y);

	if (x > 0) {
		if (y > 0) {
			printf("1��и��Դϴ�.\n");
		}
		else {
			printf("4��и��Դϴ�.\n");
		}
	}
	else {
		if (y > 0) {
			printf("2��и��Դϴ�.\n");
		}
		else {
			printf("3��и��Դϴ�.\n");
		}
	}
}