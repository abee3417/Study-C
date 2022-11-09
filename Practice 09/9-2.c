/*포인터를 이용한 재귀함수로 팩토리얼을 계산하고 출력하는 프로그램*/
#include <stdio.h>
// 재귀함수를 이용하여 팩토리얼을 계산.
void factorial(int n, int *result) {
	if (n == 1) {
		*result *= 1;
	}
	else {
		*result *= n;
		return factorial(n - 1, result);
	}
}
// 숫자를 받고 factorial함수로 넘긴 후 받은 계산값을 출력.
int main() {
	int num, result = 1;
	printf("Factorial Program\n\n");
	printf("Put the number.\n");
	scanf("%d", &num);
	factorial(num, &result);
	printf("Result is %d.\n", result);
	return 0;
}