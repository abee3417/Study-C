/* �ڿ����� ������ �ݴ�� �迭���ִ� ���α׷�*/
#include <stdio.h>

int reverse_it(int num) {      // �ڿ����� �ݴ�� �迭�ϴ� �Լ�
	int temp, i;
	for (i = num; i >= 1; i /= 10) {
		if (i <= 9) {
			temp = i;
		}
		if (i % 10 == 0) {
			break;
		}
		temp = i % 10;
		printf("%d", temp);
	}
	printf("\n");
	return 0;
}
int main() {      // �ڿ����� ������ �ݴ�� �迭�� ���� ������ִ� �Լ�
	int x, result;
	while (1) {
		printf("Enter an integer.\n");
		scanf("%d", &x);
		if (x <= 0) {
			break;
		}
		result = reverse_it(x);
	}
	return 0;
}