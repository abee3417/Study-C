/*양수인 홀수n을 입력받아서 받은 숫자에 따라 별의 패턴을 다르게 출력하는 프로그램*/

#include <stdio.h>
int main() {
	int a, num, star;
	printf("양의 홀수를 입력하세요. : ");
	scanf("%d", &num);
	if (((num % 2) != 0) && (num > 0)) {
		printf("-----------------------\n");
		printf("1)\n");
		printf("-----------------------\n");
		for (a = 1; a <= num; a++) {           //별을 오름차순으로 출력 (14~19)
			for (star = 1; star <= a; star++) {
				printf("*");
			}
			printf("\n");
		}
		printf("-----------------------\n");
		printf("2)\n");
		printf("-----------------------\n");
		for (a = num; a >= 1; a--) {           //별을 내림차순으로 출력 (23~28)
			for (star = a; star >= 1; star--) {
				printf("*");
			}
			printf("\n");
		}
		printf("-----------------------\n");
		printf("3)\n");
		printf("-----------------------\n");
		for (a = 1; a <= num; a += 2) {       //짝수개의 별은 출력하지 않고 별을 내림차순으로 출력 (30~35)
			for (star = 1; star <= a; star++) {
				printf("*");
			}
			printf("\n");
		}
		printf("-----------------------\n");
	}
	else {
		printf("입력 오류입니다.\n");
	}
	return 0;
}