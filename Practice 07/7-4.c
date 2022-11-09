#include <stdio.h>

int sum(int n) {
	int num;
	if (n == 0) {
		return 0;
	}
	else {
		scanf("%d", &num);
		return num + sum(--n);
	}
}

int main() {
	int result;
	printf("Put 5 numbers.\n");
	result = sum(5);
	printf("The result is %d.\n", result);
	return 0;
}