/*두 정수를 입력받아 서로소인지 아닌지 판단해주는 프로그램*/
#include <stdio.h>

char isPrime(int a, int b) {      // 두 수가 서로소인지 판단해주는 함수, 서로소면 y, 아니면 n을 리턴함
	int small, i, judgment = 'y';
	if (a < b) {
		small = a;
	}
	else {
		small = b;
	}
	for (i = small; i > 1; i--) {
		if (((a % i) == 0) && ((b % i) == 0)) {
			judgment = 'n';
			break;
		}
	}
	return judgment;
}

int main() {      // 두 수를 입력받고 서로소인지 아닌지에 대한 결과를 출력해주는 함수
	int x, y, result;
	printf("Enter two numbers.\n");
	scanf("%d%d", &x, &y);
	result = isPrime(x, y);
	if (result == 'y') {
		printf("They are mutually prime.\n");
	}
	else if (result == 'n') {
		printf("They aren't mutually prime.\n");
	}
	else {
		printf("Input Error.\n");
	}
	return 0;
}