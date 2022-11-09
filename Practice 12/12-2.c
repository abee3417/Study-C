/*itoa �Լ� ���� �����ϱ� (��, code���� 16���� ����.)*/
#include <stdio.h>
#include <stdlib.h>
// ���� ������ ��� �����鼭 �ڸ����� Ȯ�����ִ� �Լ�.
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
// ����� ���ڿ��� ����ִ� �Լ�.
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
// my_itoa �Լ�.
char *my_itoa(int num, char *s, int code) {
	int cipher;
	cipher = check(num, code);
	result(num, code, cipher, s);
	return s;
}
// ���� �ް� ����� ������ִ� main �Լ�.
int main() {
	int num;
	char str[100];
	printf("Enter the number.\n");
	scanf("%d", &num);
	my_itoa(num, str, 16);
	printf("It is %s in hexademical.\n", str);
	return 0;
}