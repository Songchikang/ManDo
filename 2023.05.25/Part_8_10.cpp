#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int b_rand() {
	int random = 0;
	//rand() -> 0~32767 
	 random = rand() % 2;
	return random;
}

int main(void) {
	int random = 0;
	int input = 0;
	char c1[10];
	

	printf("�ո��� 1 �޸��� 0 �Դϴ�.\n");
	for (;;) {
		random = b_rand();
		printf("0,1�� �Է��ϼ��� : ");
		scanf("%d", &input);

		if (random == input) {
			printf("�¾ҽ��ϴ�.\n");

		}
		else {
			printf("Ʋ�Ƚ��ϴ�..\n");
		}

		printf("����Ͻðڽ��ϱ�? (y �Ǵ� n) : ");
		scanf("%s", c1);

		if (strcmp(c1, "n") == 0) {
			break;
		}

	}
	 
}