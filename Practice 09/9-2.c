/*�����͸� �̿��� ����Լ��� ���丮���� ����ϰ� ����ϴ� ���α׷�*/
#include <stdio.h>
// ����Լ��� �̿��Ͽ� ���丮���� ���.
void factorial(int n, int *result) {
	if (n == 1) {
		*result *= 1;
	}
	else {
		*result *= n;
		return factorial(n - 1, result);
	}
}
// ���ڸ� �ް� factorial�Լ��� �ѱ� �� ���� ��갪�� ���.
int main() {
	int num, result = 1;
	printf("Factorial Program\n\n");
	printf("Put the number.\n");
	scanf("%d", &num);
	factorial(num, &result);
	printf("Result is %d.\n", result);
	return 0;
}