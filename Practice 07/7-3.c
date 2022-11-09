/*a의 b승을 출력하는 프로그램*/
#include <stdio.h>
int power(int a, int b) { // a의 b승을 계산해주는 재귀함수
	if (b == 0) {
		return 1;
	}
	else {
		return(a * power(a, b - 1));
	}
}

int main() {  // a값과 b값을 입력받고 power함수를 불러와 결과 출력.
	int x, y;
	printf("Put the number.\n");
	scanf("%d", &x);
	printf("How many times do you want to multiply?\n");
	scanf("%d", &y);
	printf("The squqre of %d is %d.", x, power(x, y));
	return 0;
}