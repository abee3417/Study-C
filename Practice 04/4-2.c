#include <stdio.h>
int leap_year(int y) {      //�������� �ƴ��� �Ǵ��ϴ� �Լ�
	if ((y % 4) == 0) {
		printf("It is a leap year.\n");
	}
	else {
		printf("It isn't a leap year.\n");
	}
}

int main() {      //�⵵���� �Է¹޾� �������� �ƴ��� ������ִ� �Լ�
	int year;
	printf("Enter the year.\n");
	scanf("%d", &year);
	leap_year(year);
	return 0;
}