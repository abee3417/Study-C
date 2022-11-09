/*ȣ���� ��Ģ���� �����Ŀ� �ظ� ����־� ���� �����ִ� ���α׷�*/
/*���� : 5.0 * x * x * x + 6.0 * x * x + 7.0 * x + 8.0
�̷� ���� (((5.0(x + 6.0))x + 7.0)x + 8.0 �� ���·� ���*/
#include <stdio.h>
#include <stdlib.h>

double horner(int n, double p[], double x) {  // ȣ���� ��Ģ���� ����ϴ� �Լ�
	double result = p[0];
	int i;
	for (i = 1; i < n + 1; i++) {
		result = (result * x) + p[i];
	}
	return result;
}

int main() {
	int n; //���׽��� ����
	int x; //x�� ��
	printf("Enter order and coefficients.\n");
	scanf("%d", &n);
	double * p = malloc(sizeof(double) * (n + 1));  // ������ ������ p�� �������� �������� n+1ũ�⸦ �Ҵ����.
	for (int i = 0; i < n + 1; i++) {  // �Է¹��� �������� ����� �Է¹���
		scanf("%lf", &p[i]);
	}
	scanf("%d", &x);
	double result = horner(n, p, x);
	printf("The answer is %.3lf.\n", result);
	free(p); // �����Ҵ� ����
	return 0;
}