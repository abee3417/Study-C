/*입력받은 숫자중 3, 6, 9가 들어가면 !를 출력해주는 프로그램 (369 게임)*/
#include <stdio.h>
void game(int n) {
	int number = n;
	int judgment = 0;
	int a;
	while (n>0) {       // 3, 6, 9를 판단해주는 while문
		if ((n % 10) % 3 == 0 && (n % 10) > 0) {
			judgment++;
		}
		n /= 10;
	}
	if (judgment >= 1) {      // 3, 6, 9가 있을시 그 갯수만큼 !를 출력
		for (a = 1; a <= judgment; a++) {
			printf("!");
		}
	}
	else {
		printf("%d", number);
	}
	printf(" ");
}
int main() {      // 369게임에서의 최댓값을 정함
	int num, i;
	printf("Enter a number.\n");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		game(i);
	}
	return 0;
}