#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMenu() {
	printf("==========================================\n");
	printf(" '1' ��ġ���� ��Ƽ���ͷ� ��ȯ\n");
	printf(" '2' ��Ƽ���Ϳ��� �ߵ�� ��ȯ\n");
	printf(" '3' �ߵ忡�� ���Ϸ� ��ȯ\n");
	printf(" '4' ���Ͽ��� ��ġ�� ��ȯ\n");
	printf(" '0' ����\n");
	printf("==========================================\n");
}
double IN(double in_temp) {
	return in_temp * 2.54;

}

double YD(double yd_temp) {
	return yd_temp * 36;
}

double CM(double cm_temp) {
	return  cm_temp * 0.010936;
}

double MILE(double mile_temp) {
	return  mile_temp * 63360;
}

int main(void) {
	int menu;
	double temp;
	while (1) {
		printMenu();
		printf("�޴����� �����ϼ���.");
		menu = getchar();
		if (menu == '0') {
			break;
		}
		else if (menu == '1') {
			printf("��ġ : ");
			scanf("%lf", &temp);
			printf("��Ƽ���� : %lf \n", IN(temp));
		}
		else if (menu == '2') {
			printf("��Ƽ���� : ");
			scanf("%lf", &temp);
			printf("�ߵ� : %lf \n", CM(temp));
		}
		else if (menu == '3') {
			printf("�ߵ� : ");
			scanf("%lf", &temp);
			printf("���� : %lf \n", YD(temp));
		}
		else if (menu == '4') {
			printf("���� : ");
			scanf("%lf", &temp);
			printf("��ġ : %lf \n", MILE(temp));
		}

		getchar();
	}
	return 0;
}