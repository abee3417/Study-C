/*�� ������ �Է¹޾� ���μ����� �ƴ��� �Ǵ����ִ� ���α׷�*/
#include <stdio.h>

char isPrime(int a, int b) {      // �� ���� ���μ����� �Ǵ����ִ� �Լ�, ���μҸ� y, �ƴϸ� n�� ������
	int small, i, judgment = 'y';
	if (a < b) {
		small = a;
	}
	else {
		small = b;
	}
	for (i = small; i > 1; i--) {
		if (((a % i) == 0) && ((b % i) == 0)) {
			judgment = 'n';
			break;
		}
	}
	return judgment;
}

int main() {      // �� ���� �Է¹ް� ���μ����� �ƴ����� ���� ����� ������ִ� �Լ�
	int x, y, result;
	printf("Enter two numbers.\n");
	scanf("%d%d", &x, &y);
	result = isPrime(x, y);
	if (result == 'y') {
		printf("They are mutually prime.\n");
	}
	else if (result == 'n') {
		printf("They aren't mutually prime.\n");
	}
	else {
		printf("Input Error.\n");
	}
	return 0;
}