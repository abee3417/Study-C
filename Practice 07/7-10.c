#include <stdio.h>

int modulo(char num[], int m) {
	int a;
	int b = 0, result = 0;
	for (a = 0; a < 100; a++) {
		if ((num[a] == '\n') || (num[a] == '\t') || (num[a] == ' ')) {
			break;
		}
		b++;
	}
	for (a = b - 1; b >= 0; b--) {
		result = (result * 10 + (num[a] - 48)) % m;
	}
	return result;
}

int main() {
	int i, j, n;
	char integer[100];
	printf("Enter a big positive integer and m.\n");
	for (i = 0; i < 100; i++) {
		scanf("%c", &integer[i]);
		if ((integer[i] == '\n') || (integer[i] == '\t') || (integer[i] == ' ')) {
			break;
		}
	}
	scanf("%d", &n);
	for (j = 0; j < i; j++) {
		printf("%c", integer[j]);
	}
	printf(" %c %d is %d.\n", '%', n, modulo(integer, n));
	return 0;
}