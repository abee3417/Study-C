#include <stdio.h>
int integer_calculation(int x, char mark1, int y) {      //���� ��Ģ���� ����� ���ִ� �Լ�
	if (mark1 == '+') {
		return (x + y);
	}
	else if (mark1 == '-') {
		return (x - y);
	}
	else if (mark1 == '*') {
		return (x * y);
	}
	else if (mark1 == '/') {
		return (x / y);
	}
	else {
		return 0;
	}
}
double floating_point_calculation(double a, char mark2, double b) {      //�Ǽ� ��Ģ���� ����� ���ִ� �Լ�
	if (mark2 == '+') {
		return (a + b);
	}
	else if (mark2 == '-') {
		return (a - b);
	}
	else if (mark2 == '*') {
		return (a * b);
	}
	else if (mark2 == '/') {
		return (a / b);
	}
	else {
		return 0;
	}
}
int main() {      //���ڸ� �Է¹޾Ƽ� ��갪�� ������ִ� �Լ�
	int integer1, integer2;
	double floating1, floating2;
	char sign;
	int your_choice;
	printf("Enter 1 for integer calculation, 2 for floating point calculation.\n");
	scanf("%d", &your_choice);
	if (your_choice == 1) {
		printf("Enter an expression. For example, 2 + 5.\n");
		scanf("%d %c %d", &integer1, &sign, &integer2);
		printf("It is %d.\n", integer_calculation(integer1, sign, integer2));
		return 0;
	}
	else if (your_choice == 2) {
		printf("Enter an expression. For example, 2.0 + 5.0.\n");
		scanf("%lf %c %lf", &floating1, &sign, &floating2);
		printf("It is %3lf.\n", floating_point_calculation(floating1, sign, floating2));
		return 0;
	}
	else {
		printf("ERROR : Enter only 1 or 2\n");
	}
	return 0;
}