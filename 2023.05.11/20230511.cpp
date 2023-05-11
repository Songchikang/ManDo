#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMenu() {
	printf("==========================================\n");
	printf(" '1' 인치에서 센티미터로 변환\n");
	printf(" '2' 센티미터에서 야드로 변환\n");
	printf(" '3' 야드에서 마일로 변환\n");
	printf(" '4' 마일에서 인치로 변환\n");
	printf(" '0' 종료\n");
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
		printf("메뉴에서 선택하세요.");
		menu = getchar();
		if (menu == '0') {
			break;
		}
		else if (menu == '1') {
			printf("인치 : ");
			scanf("%lf", &temp);
			printf("센티미터 : %lf \n", IN(temp));
		}
		else if (menu == '2') {
			printf("센티미터 : ");
			scanf("%lf", &temp);
			printf("야드 : %lf \n", CM(temp));
		}
		else if (menu == '3') {
			printf("야드 : ");
			scanf("%lf", &temp);
			printf("마일 : %lf \n", YD(temp));
		}
		else if (menu == '4') {
			printf("마일 : ");
			scanf("%lf", &temp);
			printf("인치 : %lf \n", MILE(temp));
		}

		getchar();
	}
	return 0;
}