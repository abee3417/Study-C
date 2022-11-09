/*두 개의 단어로 구성된 두 개의 문장을 입력받아 서로 간에 가능한 모든 문자열의 조합을 나열하는 프로그램*/
#include <stdio.h>
int main() {
	char str1[2][100], str2[2][100];
	int i, j;
	printf("Enter first text.\n");
	scanf("%s%s", str1[0], str1[1]);
	printf("Enter second text.\n");
	scanf("%s%s", str2[0], str2[1]);
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%s %s, ", str1[i], str2[j]);
		}
	}
	printf("\n");
	return 0;
}