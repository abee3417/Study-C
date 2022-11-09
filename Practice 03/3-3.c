#include <stdio.h>
double calc_average(double a, double b, double c) {
	double average;
	average = (a + b + c) / 3.0;
	return average;
}

double calc_variance(double a, double b, double c) {
	double variance;
	double m;
	m = calc_average(a, b, c);
	variance = ((a - m) * (a - m) + (b - m) * (b - m) + (c - m) * (c - m)) / 3.0;
	return variance;
}

int main() {
	double first, second, third, result;
	printf("Enter a three real numbers.\n");
	scanf("%lf%lf%lf", &first, &second, &third);
	result = calc_variance(first, second, third);
	printf("The variance is %lf.\n", result);
	return 0;
}