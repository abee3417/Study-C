/*strchr�Լ��� ���� ����� ����ϱ�*/
#include <stdio.h>
#include <string.h>
// ���ڿ����� ó�� ��Ÿ���� ���� c�� ã�� �װ��� ����Ű�� �����͸� �����ش�
char *my_strchr(char *str, char c) {
	while (*str) {
		if (*str == c) {
			str++;
			return str;
		}
		str++;
	}
	return NULL;
}
// my_strchr�Լ��� ���ڿ��� ���� c�� ���� �� ���� ���ϰ��� ����Ѵ�.
int main() {
	char str[20];
	char search;
	char* result = NULL;
	printf("Enter the text.\n");
	gets(str);
	printf("Enter the character to be searched.\n");
	scanf("%c", &search);
	result = my_strchr(str, search);
	printf("%s\n", result);
	return 0;
}
