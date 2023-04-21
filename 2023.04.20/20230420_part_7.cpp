#define _CRT_SECUER_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, a;

	for (i = 2; i <= 100; i++) {
		for (a = 2; a < i; a++) {
			if (i % a == 0) {
				break;
			}
		}
		if (i == a) {
			printf("%d ", i);
		}
	}
	return 0;
}

/*int main(void) {
	int i;

	for (i = 2; i <= 100; i++) {
		if ( (i % 2 != 0) && (i % 3 == 0) && (i % 5 == 0) && (i % 7 == 0)) {
			printf("%d ", i);
		}
	}
	return 0;
}
*/
