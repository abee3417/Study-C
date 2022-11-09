#include <stdio.h>
void BMI(double weight, double height) {      //BMI 계산 함수
	double result;
	result = weight / ((height * 0.01) * (height * 0.01));
	if (result < 18.5) {
		printf("저체중 입니다.\n");
	}
	else if (result > 25.0) {
		printf("과체중 입니다.\n");
	}
	else {
		printf("정상체중 입니다.\n");
	}
}

int main() {      //입력받은 몸무게, 키에 따라 비만도를 출력해주는 함수
	double your_weight;
	double your_height;
	printf("Enter weight and height.\n");
	scanf("%lf%lf", &your_weight, &your_height);
	BMI(your_weight, your_height);
	return 0;
}