/*자연수 N을 입력받아 S = 12 + 22 + ,,, + N2를 계산하는 프로그램*/
#include <stdio.h>
int sum(int n) {  // 입력받은 숫자에 대해 S를 계산하는 재귀함수.
	if (n == 0) {
		return 0;
	}
	else {
		return (((10 * n) + 2) + sum(n - 1));
	}
}

int main() {  // 숫자를 입력받고 sum함수를 불러와 결과를 출력함.
	int num, i;
	printf("Put the number.\n");
	scanf("%d", &num);
	if (num < 1) {
		printf("Error");
	}
	else {
		for (i = 1; i <= num; i++) {  // S를 표시해줌.
			if (i < num) {
				printf("%d2 + ", i);
			}
			else if (i = num) {
				printf("%d2 = ", i);
			}
		}
		printf("%d", sum(num));
	}
	return 0;
}