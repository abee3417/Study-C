// �� ���� ���ڿ� ������ �ٲٴ� ���α׷�
#include <stdio.h>
#define MAX 100
void swap(char *arr1, char *arr2) {
	int length1 = 0, length2 = 0;
	int i, length;
	char *ch1 = arr1;
	char *ch2 = arr2;
	char temp;
	// ���ڿ��� ���� ����
	while (*ch1++) {
		++length1;
	}
	while (*ch2++) {
		++length2;
	}
	if (length1 >= length2) {
		length = length1;
	}
	else {
		length = length2;
	}
	// ���ڿ��� ��ȯ
	ch1 = arr1;
	ch2 = arr2;
	for (i = 0; i <= length; ++i, ++ch1, ++ch2) {
		temp = *ch1;
		*ch1 = *ch2;
		*ch2 = temp;
	}
}
// ���ڸ� �ް� swap�Լ��� ���� �� ���� �� ���
int main() {
	char arr1[MAX], arr2[MAX];
	printf("Enter two strings.\n");
	gets(arr1);
	gets(arr2);
	swap(arr1, arr2);
	printf("\n");
	printf("After reverse : \n");
	puts(arr1);
	puts(arr2);
	printf("\n");
	return 0;
}