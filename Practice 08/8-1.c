/*�Է¹��� ���� �߿� 'e'�� �ִ����� Ȯ���ϴ� ���α׷� */
#include <stdio.h>
#define MAX 100
int main() {
	int i, j;
	char sentence[MAX];
	printf("Enter input sentence.\n");
	for (i = 0; i < 99; i++) {  // ���� �Է�
		scanf("%c", &sentence[i]);
		if (sentence[i] == '\n') {
			break;
		}
	}
	sentence[MAX - 1] = 'e';
	for (j = 0; j < (MAX - 1); j++) {  // ������ Ȯ���ϸ鼭 e�� �ִ��� Ȯ��
		if (sentence[j] == 'e') {
			printf("Yes.\n");
			return 0;
		}
	}
	printf("No.\n");
	return 0;
}