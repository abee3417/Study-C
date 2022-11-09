/*이차방정식이나 일차방정식을 풀이해주는 프로그램*/

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
	else if (a == 0) {      // a가 0일때는 일차방정식을 푼다.
		x = -c / b;
		printf("The roots are %.3lf.\n", x);
	}
	else if (d >= 0) {      // 그 외 상황에서는 이차방정식을 푼다.
		x = (-b + sqrt(d)) / (2.0 * a);
		y = (-b - sqrt(d)) / (2.0 * a);
		printf("The roots are %.3lf, %.3lf.\n", x, y);
	}
	return 0;
}