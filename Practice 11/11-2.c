/*strcmp함수를 직접 만들어 출력하기*/
#include <stdio.h>
// 두 문자열을 받고 크기를 비교하는 my_strcmp함수.
int my_strcmp(const char *str1, const char *str2) {
	if (*str1 == (int)NULL && *str2 == (int)NULL) {
		return 0;
	}
	while (*str1 != (int)NULL) {
		if (*str2 == (int)NULL) {
			return 1;
		}
		if (*str1 == *str2){
			str1++;
			str2++;
			continue; 
		}
		if (*str1 < *str2) {
			return -1;
		}
		else {
			return 1;
		}
	}
	if (*str2 != (int)NULL) {
		return -1;
	}
	return 0;
}
// quit이 입력될때까지 문자열을 계속 받으면서 크기를 비교 후 출력.
int main() {
	int result, i;
	char str1[20], str2[20];
	while (1) {
		printf("Enter the first string.\n");
		gets(str1);
		if ((str1[0] == 'q') && (str1[1] == 'u') && (str1[2] == 'i') && (str1[3] == 't')) {
			break;
		}
		printf("Enter the second string.\n");
		gets(str2);
		result = my_strcmp(str1, str2);
		if (result == -1) {
			printf("%s is smaller than %s.\n", str1, str2);
		}
		else if (result == 1) {
			printf("%s is smaller than %s.\n", str2, str1);
		}
		else {
			printf("%s is the same as %s.\n", str1, str2);
		}
	}
	return 0;
}