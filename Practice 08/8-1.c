/*입력받은 문장 중에 'e'가 있는지를 확인하는 프로그램 */
#include <stdio.h>
#define MAX 100
int main() {
	int i, j;
	char sentence[MAX];
	printf("Enter input sentence.\n");
	for (i = 0; i < 99; i++) {  // 문장 입력
		scanf("%c", &sentence[i]);
		if (sentence[i] == '\n') {
			break;
		}
	}
	sentence[MAX - 1] = 'e';
	for (j = 0; j < (MAX - 1); j++) {  // 문장을 확인하면서 e가 있는지 확인
		if (sentence[j] == 'e') {
			printf("Yes.\n");
			return 0;
		}
	}
	printf("No.\n");
	return 0;
}