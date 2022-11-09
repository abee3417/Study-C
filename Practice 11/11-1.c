/*입력한 문자열을 10진수로 변환하는 atoi 함수 만들기*/
#include <stdio.h>
// 입력받은 문자열을 10진수로 변환한 후 다시 리턴.
int my_atoi(char *str) {
	int a, num = 0;
	int i;
	for (i = 0; a = str[i]; i++) {
		if (('0' <= a) && (a <= '9')) {
			num *= 10;
			num += (a - '0');
		}
	}
	return num;
}
// 문자열을 입력받고 atoi로 보낸 후 받은 십진수값을 출력.
int main() {
	char str[10];
	printf("Enter a number.\n");
	gets(str);
	printf("The string you entered is %d in decimal.\n", my_atoi(str));
	return 0;
}