/*�Է��� ���ڿ��� 10������ ��ȯ�ϴ� atoi �Լ� �����*/
#include <stdio.h>
// �Է¹��� ���ڿ��� 10������ ��ȯ�� �� �ٽ� ����.
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
// ���ڿ��� �Է¹ް� atoi�� ���� �� ���� ���������� ���.
int main() {
	char str[10];
	printf("Enter a number.\n");
	gets(str);
	printf("The string you entered is %d in decimal.\n", my_atoi(str));
	return 0;
}