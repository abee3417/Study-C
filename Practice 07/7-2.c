/*�ڿ��� N�� �Է¹޾� S = 12 + 22 + ,,, + N2�� ����ϴ� ���α׷�*/
#include <stdio.h>
int sum(int n) {  // �Է¹��� ���ڿ� ���� S�� ����ϴ� ����Լ�.
	if (n == 0) {
		return 0;
	}
	else {
		return (((10 * n) + 2) + sum(n - 1));
	}
}

int main() {  // ���ڸ� �Է¹ް� sum�Լ��� �ҷ��� ����� �����.
	int num, i;
	printf("Put the number.\n");
	scanf("%d", &num);
	if (num < 1) {
		printf("Error");
	}
	else {
		for (i = 1; i <= num; i++) {  // S�� ǥ������.
			if (i < num) {
				printf("%d2 + ", i);
			}
			else if (i = num) {
				printf("%d2 = ", i);
			}
		}
		printf("%d", sum(num));
	}
	return 0;
}