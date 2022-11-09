#include <stdio.h>
int main() {
	double 키;
	double 몸무게;
	double feet;
	double lb;
	double 표준체중;
	double 차이;

	printf("키(cm)를 입력하세요.");
	scanf("%lf", &키);
	printf("몸무게(kg)를 입력하세요.");
	scanf("%lf", &몸무게);

	feet = 키 / 30.48;
	lb = 몸무게 * 2.20459;
	표준체중 = (키 - 100.0) * 0.9;
	차이 = 몸무게 - 표준체중;

	printf("\n");
	printf("당신의 키는 %.1lfcm (%.1lffeet) 입니다.\n", 키, feet);
	printf("당신의 체중은 %.1lfkg (%.1lflb) 입니다.\n", 몸무게, lb);
	printf("표준 체중 %.1lf과의 차이는 %+.1lfkg 입니다.\n", 표준체중, 차이);

	return 0;
}