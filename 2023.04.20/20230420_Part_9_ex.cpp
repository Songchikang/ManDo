#include <stdio.h>

/*int main(void) {
	int i, value = 0;

	for (i = 1; i <= 30; i++) {
		value += i * i + 1;
	}
	printf("%d\n", value);
	return 0;
}*/


int main(void) {
	int i,j, value = 0;

	for (i = 10; i <= 30; i++) {
		for (j = 0; j <= 5; j++) {
			value += i + j;
		}
	}
	printf("%d\n", value);
	return 0;
}