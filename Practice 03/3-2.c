#include <stdio.h>
#include <math.h>
int round_up(double a) {
	double b;
	double floor(double a);
	b = (a + 0.5);
	return b;
}

int main() {
	int result;
	double first;
	printf("Enter a real number.\n");
	scanf("%lf", &first);
	result = round_up(first);
	printf("Result of round up is %d.\n", result);
	return 0;
}