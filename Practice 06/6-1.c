/*�������� ������ִ� ���α׷�*/

#include <stdio.h>
int main() {
	int i, j, result;
	printf("==========������==========\n");
	for (i = 1; i <= 9; i++) {      // 1�ܺ��� 9�ܱ��� ����
		printf("%d��---------------------\n", i);
		for (j = 1; j <= 9; j++) {      // �� �ܸ��� 1���� 9���� ����.
			result = i * j;
			printf("%d * %d = %d\n", i, j, result);
		}
	}
	return 0;
}