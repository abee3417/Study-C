/*일련의 자연수를 입력받아 지속적으로 평균값을 출력하는 프로그램*/
#include <stdio.h>
int main() {
	int num, i;
	double sum;
	printf("Enter an integer.\n");
	scanf("%d", &num);
	if (num <= 0) {      //처음부터 0이나 음수가 들어오면 평균을 0이라고 하고 끝냄
		printf("Current average is 0.000.\n");
		return 0;
	}
	else {
		sum = num;
		printf("Current average is %.3lf.\n", sum);
	}

	while (1) {      //자연수를 받아 평균값을 계산하고 출력하는 과정을 반복 (17~29)
		for (i = 2; i != 0; i++) {
			printf("Enter an integer.\n");
			scanf("%d", &num);
			double result;
			if (num < 0) {
				return 0;
			}
			sum = sum + num;
			result = sum / i;
			printf("Current average is %.3lf.\n", result);
		}
	}
	return 0;
}