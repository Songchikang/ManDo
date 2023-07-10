#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void) {
	struct student s;

	printf("학번을 입력하세요 : ");
	scanf("%d", &s.number);

	printf("이름을 입력하세요 : ");
	scanf("%s", s.number);

	printf("학점을 입력하세요(실수) : ");
	scanf("%lf", &s.grade);

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %f\n", s.grade);

	return 0;
}