/*회문인지 아닌지 판단하는 프로그램*/
#include <stdio.h>
int main() {
	char sentence[100];
	int i, j, k, length = 0, check = 0;
	while ((sentence[0] != 'q') && (sentence[1] != 'u') && (sentence[2] != 'i') && (sentence[3] != 't')) {
		printf("Enter input sentence.\n");
		scanf("%s", &sentence);
		for (i = 0; i < 100; i++) {  // 문장의 길이 측정
			if (sentence[i] != '\0') {
				length++;
			}
			else {
				break;
			}
		}
		for (j = 0, k = length - 1; j < length; j++, k--) {
			// 문장의 첫번째 알파벳과 마지막 알파벳부터 서로 증가, 감소 하며 비교함
			if (sentence[j] != sentence[k]) {
				check++;
				break;
			}
			else {
			}
		}
		if (check > 0) {
			printf("No, it is NOT a palindrome.\n\n");
		}
		else if (check == 0) {
			printf("Yes, it is a palindrome.\n\n");
		}
		length = 0;
		check = 0;
	}
	return 0;
}