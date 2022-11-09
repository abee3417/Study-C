/*itoa 함수 직접 구현하기 (단, code값은 16으로 설정.)*/
#include <stdio.h>
#include <stdlib.h>
// 값을 진수로 계속 나누면서 자릿수를 확인해주는 함수.
int check(int num, int code) {
	int i;
	for (i = 1; ;i++) {
		num = num / code;
		if (num <= 0) {
			break;
		}
	}
	return i;
}
// 결과를 문자열에 집어넣는 함수.
void result(int num, int code, int cipher, char *s) {
	int i;
	int rest = 0;
	s[cipher] = NULL;
	for (i = 1; i <= cipher; i++) {
		rest = num % code;
		num = num / code;
		if (rest < 10) {
			s[cipher - i] = rest + '0';
		}
		else {
			s[cipher - i] = rest % 10 + 'A';
		}
	}
}
// my_itoa 함수.
char *my_itoa(int num, char *s, int code) {
	int cipher;
	cipher = check(num, code);
	result(num, code, cipher, s);
	return s;
}
// 값을 받고 결과를 출력해주는 main 함수.
int main() {
	int num;
	char str[100];
	printf("Enter the number.\n");
	scanf("%d", &num);
	my_itoa(num, str, 16);
	printf("It is %s in hexademical.\n", str);
	return 0;
}