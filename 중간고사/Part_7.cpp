#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*int a, b, c, min;
	
	printf("������ 3�� �Է��ϼ��� : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b && a < c) {
		printf("���� ���� ���� %d�Դϴ�.\n", a);
	}
	else if (b < a && b < c) {
		printf("���� ���� ���� %d�Դϴ�.\n", b);
	}
	else if (c < a && c < b) {
		printf("���� ���� ���� %d�Դϴ�.\n", c);
	}
	else {
		printf("�Է��� �߸��Ǿ����ϴ�.\n");
	}*/

	int a, b, c, min;

	printf("������ 3�� �Է��ϼ��� : ");
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
	printf("���� ���� ���� %d�Դϴ�.\n", min);
}