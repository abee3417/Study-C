/*strstr함수를 직접 만들어 출력하기*/
#include <stdio.h>
#include <string.h>
// 문자열에서 해당 문자를 찾으면 해당 문자의 다음 문장을 리턴.
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
// 문자열과 문자 c를 받고 my_strstr함수로 보낸 뒤 받은 리턴값을 출력.
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