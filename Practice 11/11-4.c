/*strstr�Լ��� ���� ����� ����ϱ�*/
#include <stdio.h>
#include <string.h>
// ���ڿ����� �ش� ���ڸ� ã���� �ش� ������ ���� ������ ����.
char *my_strstr(char *str, char *c) {
	char * temp = c;
	while (*str) {
		if (*str != *c) {
			c = temp;
		}
		if (*str == *c) {
			c++;
			if (*c == '\0') {
				str++;
				return str;
			}
		}
		str++;
		if (*str == '\0') {
			return NULL;
		}
	}
}
// ���ڿ��� ���� c�� �ް� my_strstr�Լ��� ���� �� ���� ���ϰ��� ���.
int main() {
	char str[20];
	char* search[20];
	char* result = NULL;
	printf("Enter the text.\n");
	gets(str);
	printf("Enter the string to be searched.\n");
	gets(search);
	result = my_strstr(str, search);
	printf("%s\n", result);
	return 0;
}