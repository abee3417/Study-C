#include <stdio.h>
int main() {
	int i;
	printf("십진법 십육진법 문자\n");
	printf("\n");

	for (i = 0; i <= 127; i++)
	printf("  %d\t  %x\t  %c\n", i, i, i);

	return 0;
}