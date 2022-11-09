/*두 수 x, y를 받아서 x의 y제곱을 계산해주는 프로그램*/
#include <stdio.h>
int power(int a, int b) {      //a를 b번 곱해주는 함수
	int i, square = 1;
	for (i = 1; i <= b; i++) {
		square *= a;
	}
	return square;
}

int main() {      //두 수를 받아서 거듭제곱 계산결과를 출력해주는 함수
	int x, y, result;   
	printf("Enter base and power.\n");
	scanf("%d%d", &x, &y);
	result = power(x, y);
	printf("%d to the %d is %d.\n", x, y, result);
	return 0;
}