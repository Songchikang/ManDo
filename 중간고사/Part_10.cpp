#include <stdio.h>

int main(void) {
	/*for (int i = 0; i < 10; i += 2) {
		printf("%d\n", i);
	}*/ /*10-1번 문제*/

	/*int i = 0x10;
	for (; i; i >>= 1) {
		printf("hello");
	}*/ /*10-2번 문제*/

	int x, y;
	for (x = 0; x < 3; x++) {
		for (y = 2; y >= 0; y--) {
			printf("*");
		}
	}/*10-3번 문제*/
}