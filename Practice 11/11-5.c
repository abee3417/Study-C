/*���ڿ� ������ Ư�� ���ڿ��� �ٸ� ���ڿ��� �ٲٴ� ���α׷�*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ���ڿ��� �ٸ� ���ڿ��� ��ü�ϴ� replace�Լ�.
int replace(char *str, char *c) {
	char *a = c;
	while (*str) {
		if (*str != *c) {
			c = a;
		}
		if (*str == *c) {
			c++;
			if (*c == '\0') {
				str++;
				return 1;
			}
		}
		str++;
		if (*str == '\0') {
			return NULL;
		}
	}
}
int check(char *main, char *source, int len) {
	int i;
	for (i = 0; i < len; i++) {
		if (main[i] == source[i]) {
			return 1;
		}
		else if (main[i] != source[i]) {
			return 2;
		}
	}
}
// ���ڿ��� ��ȯ�� �����ϴ� proceed �Լ�
void proceed(char *main, int length, char *source, int length1, char *target, int length2) {
	int i, j;
	for (i = 0; i <= length;) {
		if (replace(main, source) == 0) {
			printf("It have no strings to change.\n");
			break;
		}
		if (check(main + i, source, length1) == 1) {
			for (j = 0; j < length2; j++) {
				printf("%c", target[j]);
			}
			i += length1;
		}
		else {
			printf("%c", main[i]);
			i++;
		}
	}
}
int main() {
	char str1[80], str2[80], str3[80];
	printf("Enter the text.\n");
	gets(str1);
	printf("Enter the source string.\n");
	gets(str2);
	printf("Enter the target string.\n");
	gets(str3);
	proceed(str1, strlen(str1), str2, strlen(str2), str3, strlen(str3));
	return 0;
}