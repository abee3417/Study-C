#include <stdio.h>
void BMI(double weight, double height) {      //BMI ��� �Լ�
	double result;
	result = weight / ((height * 0.01) * (height * 0.01));
	if (result < 18.5) {
		printf("��ü�� �Դϴ�.\n");
	}
	else if (result > 25.0) {
		printf("��ü�� �Դϴ�.\n");
	}
	else {
		printf("����ü�� �Դϴ�.\n");
	}
}

int main() {      //�Է¹��� ������, Ű�� ���� �񸸵��� ������ִ� �Լ�
	double your_weight;
	double your_height;
	printf("Enter weight and height.\n");
	scanf("%lf%lf", &your_weight, &your_height);
	BMI(your_weight, your_height);
	return 0;
}