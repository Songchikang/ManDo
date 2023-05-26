#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap(int year) {
	int leap_year = 366;
	int common_year = 365;
	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0) {
		return leap_year;
	}
	else {
		return common_year;
	}
}

int main(void) {
	int year;

	printf("년도를 입력하세요 : ");
	scanf("%d", &year);
	printf("%d년은 %d일 입니다.\n", year, is_leap(year));
}