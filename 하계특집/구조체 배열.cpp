#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STUDENT_NUMBER 20

typedef struct {
	int middle;
	int final;
	int assignment;
	int total;
	int rank;
	int sum;
} Student;

// ���� ����
void random_grade(Student student[]) {
	for (int i = 0; i < STUDENT_NUMBER; i++) {
		student[i].middle = rand() % 41 + 1;
		student[i].final = rand() % 31 + 1;
		student[i].assignment = rand() % 31 + 1;
	}
}
//����
void grand_total(Student student[]) {
	for (int i = 0; i < STUDENT_NUMBER; i++) {
		student[i].total = student[i].middle + student[i].final + student[i].assignment;
	}
}
//����
void student_rank(Student student[]) {
	for (int i = 0; i < STUDENT_NUMBER; i++) {
		student[i].rank = 1;
		for (int j = 0; j < STUDENT_NUMBER; j++) {
			if (student[j].total > student[i].total) {
				student[i].rank++;
			}
		}
	}
}
//����
void sort_student(Student student[]) {
	int temp = 0;
	int sort[STUDENT_NUMBER];

	for (int i = 0; i < STUDENT_NUMBER; i++) {
		sort[i] = student[i].sum;
	}

	for (int i = 0; i < STUDENT_NUMBER; i++) {
		for (int j = 0; j < STUDENT_NUMBER - 1; j++) {
			if (sort[j] < sort[j + 1]) {
				temp = sort[j + 1];
				sort[j + 1] = sort[j];
				sort[j] = temp;
			}
		}
	}
}
//���
void print_array(Student student[]) {
	printf("�л�\t�߰�\t�⸻\t�⼮\t�հ�\t���\n");
	printf("--------------------------------------------\n");
	for (int i = 0; i < STUDENT_NUMBER; i++) {
		printf("�л�%2d\t%3d\t%3d\t%3d\t%3d\t%3d\n", i + 1, student[i].middle, student[i].final,
			student[i].assignment, student[i].total, student[i].rank);
	}
		printf("\n");
}

int main(void) {
	srand((unsigned)time(NULL));
	Student student[STUDENT_NUMBER];

	random_grade(student);
	grand_total(student);
	student_rank(student);
	sort_student(student);
	print_array(student);

	return 0;
}
