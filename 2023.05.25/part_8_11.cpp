#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float f_rand() {
	float random = 0;
	//rand() -> 0~32767 
	random = rand() / (double)32767;
	return random;
}

int main(void) {
	float random = 0;

	for (int i = 0; i < 5; i++) {
		random = f_rand();
		printf("%f ", random);
	}

}