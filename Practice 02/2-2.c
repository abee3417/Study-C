#include <stdio.h>
int main() {
	double r;
	double pi = 3.141592;
	double �ѷ�;
	double ����;
	double ����;

	printf("������(��)�� �Է��ϼ���.");
	scanf("%lf", &r);

	�ѷ� = 2.0 * r * pi;
	���� = r * r * pi;
	���� = (4.0 / 3.0) * r * r * r * pi;

	printf("�ѷ�=%7.2lf��\n", �ѷ�);
	printf("����=%7.2lf��\n", ����);
	printf("����=%7.2lf��\n", ����);

	return 0;
}