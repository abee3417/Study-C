/*자연수 N을 입력받아 화면에 N개의 * 을 출력하는 프로그램*/
#include <stdio.h>
int asterisk(int n) {  // 입력받은 숫자를 1로 계속 빼면서 0이 될때까지 *을 출력하는 재귀함수.
	if (n == 0) {
		return 0;
	}
	else {
		asterisk(n - 1);
		printf("* ");
	}
}int main() {  // 숫자를 입력받고 asterisk 함수를 불러와 결과를 출력함.
	int num;
	printf("Put the number.\n");
	scanf("%d", &num);
	asterisk(num);
	return 0;
}