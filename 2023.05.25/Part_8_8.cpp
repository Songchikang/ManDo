#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.1415926

double sin_degree(double degree) {
	double result = 0;
	result = sin((PI * degree) / 180.0);
	return result;
}
 
int main(void) {
	for (float x = 0; x <= 180; x += 10) {
		printf("sin(%f)ÀÇ °ªÀº %f\n", x, sin_degree(x));
	}

}