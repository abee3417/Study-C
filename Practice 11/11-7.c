/*���� �ܾ�� ������ �ϳ��� ������ �Է¹޾� ���� ���� ������ ��� ������ �����ϴ� ���α׷�*/
#include <stdio.h>
#include <string.h>
char pointer[100];
// ���� �Լ�.
void swap(char* p, char* q) {
	char temp;
	temp = *p;
	*p = *q;
	*q = temp;
	return 0;
}
// ���� (������ ��� ����)�� ������ְ� ������ִ� permute �Լ�.
void permute(char* s, int left, int right) {
	int i;
	if (left == right) {
		for (i = 0; i < right; i++) {
			printf("%s ", s + pointer[i]);
		}
		printf("\n");
	}
	else {
		for (i = left;i < right;i++) {
			swap(&pointer[left], &pointer[i]);
			permute(s, left + 1, right);
			swap(&pointer[left], &pointer[i]);
		}
	}
}
// ���ڿ��� ��� �޾� permute�Լ��� ����.
int main() {
	char str[100];
	int i, j = 1;
	pointer[0] = 0;
	printf("Enter text.\n");
	gets(str);
	for (i = 0; ;i++) {
		if (*(str + i) == ' ') {
			*(str + i) = '\0';
			pointer[j] = i + 1;
			j++;
		}
		else if (*(str + i) == '\0') {
			break;
		}
	}
	permute(str, 0, j);
	return 0;
}