/*���ϴ� ������ ���� �Է��ϸ� �ش� �޷��� ������ִ� ���α׷�*/

//������ �� �Է¹ޱ�
#include <stdio.h>
int main() {
	int year, month, week;
	int leap, a, b, i = 0;
	int day = 0, x, y = 0, z;
	printf("�˰� ���� ������ ���� �Է��ϼ���.\n");
	scanf("%d%d", &year, &month);
	//�����Ǵ�
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		leap = 1;
	}
	else {
		leap = 0;
	}
	//�Է¹��� ������ �� ���������� ��� ��¥ ���
	for (a = 1; a <= year; a++) {
		for (b = 1; b <= 12; b++) {
			if ((b == 1) || (b == 3) || (b == 5) || (b == 7) || (b == 8) || (b == 10) || (b == 12)) {
				day += 31;
			}
			else if ((b == 4) || (b == 6) || (b == 9) || (b == 11)) {
				day += 30;
			}
			else if (i == 2) {
				if (leap == 1) {
					day += 29;
				}
				else {
					day += 28;
				}
			}
		}
	}
	//�Է¹��� ���� ���ޱ����� ������ ��� ��¥ ���
	for (i = 1; i <= month; i++) {
		if ((i == 2) || (i == 4) || (i == 6) || (i == 9) || (i == 11)) {
			day += 31;
		}
		else if ((i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12)) {
			day += 30;
		}
		else if (i == 3) {
			if (leap == 1) {
				day += 29;
			}
			else {
				day += 28;
			}
		}
	}
	week = (day - 1) % 7;
	//�޷� ��� Ʋ �����
	if ((month < 13) && (month != 0)) {
		printf("\n");
		printf("     %d�� %d�� �޷�\n\n", year, month);
		printf(" �� �� ȭ �� �� �� ��\n");
	}
	//1���� 31���� ����� �޷�
	if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {
		for (x = 0; x < week; x++) {
			printf("   ");
			y++;
		}
		for (z = 1; z <= 31; z++) {
			printf("%3d", z);
			if ((y + z) % 7 == 0) {
				printf("\n");
			}
		}
	}
	//1���� 30���� ����� �޷�
	else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
		for (x = 0; x < week; x++) {
			printf("   ");
			y++;
		}
		for (z = 1; z <= 30; z++) {
			printf("%3d", z);
			if ((y + z) % 7 == 0) {
				printf("\n");
			}
		}
	}
	//2�� �޷��� ��� �������� �ƴ����� ���� �ٸ��� ���
	else if (month == 2) {
		if (leap == 1) {
			for (x = 0; x < week; x++) {
				printf("   ");
				y++;
			}
			for (z = 1; z <= 29; z++) {
				printf("%3d", z);
				if ((y + z) % 7 == 0) {
					printf("\n");
				}
			}
		}
		else if (leap == 0) {
			for (x = 0; x < week; x++) {
				printf("   ");
				y++;
			}
			for (z = 1; z <= 28; z++) {
				printf("%3d", z);
				if ((y + z) % 7 == 0) {
					printf("\n");
				}
			}
		}
	}
	printf("\n\n");
	return 0;
}