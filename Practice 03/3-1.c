#include <stdio.h>
int main() {
	char my_string1[100], my_string2[100], my_string3[100];
	printf("문자열 3개를 입력하세요.\n");
	scanf("%s%s%s", &my_string1, &my_string2, &my_string3);
	printf("입력하신 문자열은 %s, %s, %s 입니다.\n", my_string1, my_string2, my_string3);
	return 0;
}