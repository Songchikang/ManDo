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
	

	printf("앞면은 1 뒷면은 0 입니다.\n");
	for (;;) {
		random = b_rand();
		printf("0,1를 입력하세요 : ");
		scanf("%d", &input);

		if (random == input) {
			printf("맞았습니다.\n");

		}
		else {
			printf("틀렸습니다..\n");
		}

		printf("계속하시겠습니까? (y 또는 n) : ");
		scanf("%s", c1);

		if (strcmp(c1, "n") == 0) {
			break;
		}

	}
	 
}