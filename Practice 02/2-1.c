#include <stdio.h>
int main() {
	int i;
	printf("������ �������� ����\n");
	printf("\n");

	for (i = 0; i <= 127; i++)
	printf("  %d\t  %x\t  %c\n", i, i, i);

	return 0;
}