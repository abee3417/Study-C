#include <stdio.h>
int main() {
	double r;
	double pi = 3.141592;
	double 둘레;
	double 면적;
	double 부피;

	printf("반지름(㎝)을 입력하세요.");
	scanf("%lf", &r);

	둘레 = 2.0 * r * pi;
	면적 = r * r * pi;
	부피 = (4.0 / 3.0) * r * r * r * pi;

	printf("둘레=%7.2lf㎝\n", 둘레);
	printf("면적=%7.2lf㎠\n", 면적);
	printf("부피=%7.2lf㎤\n", 부피);

	return 0;
}