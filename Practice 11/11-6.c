/*�� ���� �ܾ�� ������ �� ���� ������ �Է¹޾� ���� ���� ������ ��� ���ڿ��� ������ �����ϴ� ���α׷�*/
#include <stdio.h>
int main() {
	char str1[2][100], str2[2][100];
	int i, j;
	printf("Enter first text.\n");
	scanf("%s%s", str1[0], str1[1]);
	printf("Enter second text.\n");
	scanf("%s%s", str2[0], str2[1]);
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%s %s, ", str1[i], str2[j]);
		}
	}
	printf("\n");
	return 0;
}