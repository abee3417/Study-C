/*하노이 타워 문제를 푸는 프로그램*/
//규칙 1번 : 모든 원반을 X에서 Y로 옮긴다.
//규칙 2번 : 한번에 한개만 움직인다.
//규칙 3번 : 매 순간마다 작은 원반은 꼭 큰 원반 위에 놓여져 있어야한다.

#include <stdio.h>  
void hanoi(int n, char x, char y, char z) {  // 하노이 타워 문제를 해결하는 함수
	if (n == 1) {
		printf("Move 1 disk from %c to %c.\n", x, y);
	}
	else {
		hanoi(n - 1, x, z, y);
		printf("Move %d disk from %c to %c.\n", n, x, y);  // 디스크 숫자가 클수록 큰 원반입니다.
		hanoi(n - 1, z, y, x);
	}
}
int main() {  // 원반의 갯수를 입력받고 그에 따른 결과를 출력하는 함수
	int num;
	printf("Enter the number N.\n");
	scanf("%d", &num);
	hanoi(num, 'X', 'Y', 'Z');
	return 0;
}