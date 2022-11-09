/*여러 단어로 구성된 하나의 문장을 입력받아 서로 간에 가능한 모든 조합을 나열하는 프로그램*/
#include <stdio.h>
#include <string.h>
char pointer[100];
// 스왑 함수.
void swap(char* p, char* q) {
	char temp;
	temp = *p;
	*p = *q;
	*q = temp;
	return 0;
}
// 순열 (가능한 모든 조합)을 만들어주고 출력해주는 permute 함수.
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
// 문자열을 모두 받아 permute함수로 보냄.
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