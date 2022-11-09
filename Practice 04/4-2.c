#include <stdio.h>
int leap_year(int y) {      //윤년인지 아닌지 판단하는 함수
	if ((y % 4) == 0) {
		printf("It is a leap year.\n");
	}
	else {
		printf("It isn't a leap year.\n");
	}
}

int main() {      //년도값을 입력받아 윤년인지 아닌지 출력해주는 함수
	int year;
	printf("Enter the year.\n");
	scanf("%d", &year);
	leap_year(year);
	return 0;
}