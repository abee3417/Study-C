/*strchr함수를 직접 만들어 출력하기*/
#include <stdio.h>
#include <string.h>
// 문자열에서 처음 나타나는 문자 c를 찾아 그곳을 가리키는 포인터를 돌려준다
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
// my_strchr함수로 문자열과 문자 c를 보낸 후 받은 리턴값을 출력한다.
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
