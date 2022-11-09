/* 자연수를 받으면 반대로 배열해주는 프로그램*/
#include <stdio.h>

int reverse_it(int num) {      // 자연수를 반대로 배열하는 함수
	int temp, i;
	for (i = num; i >= 1; i /= 10) {
		if (i <= 9) {
			temp = i;
		}
		if (i % 10 == 0) {
			break;
		}
		temp = i % 10;
		printf("%d", temp);
	}
	printf("\n");
	return 0;
}
int main() {      // 자연수를 받으면 반대로 배열한 값을 출력해주는 함수
	int x, result;
	while (1) {
		printf("Enter an integer.\n");
		scanf("%d", &x);
		if (x <= 0) {
			break;
		}
		result = reverse_it(x);
	}
	return 0;
}