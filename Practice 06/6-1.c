/*구구단을 출력해주는 프로그램*/

#include <stdio.h>
int main() {
	int i, j, result;
	printf("==========구구단==========\n");
	for (i = 1; i <= 9; i++) {      // 1단부터 9단까지 설정
		printf("%d단---------------------\n", i);
		for (j = 1; j <= 9; j++) {      // 각 단마다 1부터 9까지 곱함.
			result = i * j;
			printf("%d * %d = %d\n", i, j, result);
		}
	}
	return 0;
}