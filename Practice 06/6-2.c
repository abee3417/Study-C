/*�����������̳� ������������ Ǯ�����ִ� ���α׷�*/

#include <stdio.h>
#include <math.h>
int main() {
	double a, b, c, d;
	double x, y;
	printf("Enter a b c.\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	d = (b * b) - (4.0 * a * c);
	if ((a == 0) && (b == 0) || (d < 0)) {
		printf("Error.\n");
	}
	else if (a == 0) {      // a�� 0�϶��� ������������ Ǭ��.
		x = -c / b;
		printf("The roots are %.3lf.\n", x);
	}
	else if (d >= 0) {      // �� �� ��Ȳ������ ������������ Ǭ��.
		x = (-b + sqrt(d)) / (2.0 * a);
		y = (-b - sqrt(d)) / (2.0 * a);
		printf("The roots are %.3lf, %.3lf.\n", x, y);
	}
	return 0;
}