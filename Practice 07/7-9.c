/*호르너 규칙으로 방정식에 해를 집어넣어 값을 구해주는 프로그램*/
/*예시 : 5.0 * x * x * x + 6.0 * x * x + 7.0 * x + 8.0
이런 식을 (((5.0(x + 6.0))x + 7.0)x + 8.0 의 형태로 계산*/
#include <stdio.h>
#include <stdlib.h>

double horner(int n, double p[], double x) {  // 호르너 규칙으로 계산하는 함수
	double result = p[0];
	int i;
	for (i = 1; i < n + 1; i++) {
		result = (result * x) + p[i];
	}
	return result;
}

int main() {
	int n; //다항식의 차수
	int x; //x의 값
	printf("Enter order and coefficients.\n");
	scanf("%d", &n);
	double * p = malloc(sizeof(double) * (n + 1));  // 더블형 포인터 p를 생성한후 동적으로 n+1크기를 할당받음.
	for (int i = 0; i < n + 1; i++) {  // 입력받은 차수까지 계수를 입력받음
		scanf("%lf", &p[i]);
	}
	scanf("%d", &x);
	double result = horner(n, p, x);
	printf("The answer is %.3lf.\n", result);
	free(p); // 동적할당 해제
	return 0;
}