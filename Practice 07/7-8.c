/*ȸ������ �ƴ��� �Ǵ��ϴ� ���α׷�*/
#include <stdio.h>
int main() {
	char sentence[100];
	int i, j, k, length = 0, check = 0;
	while ((sentence[0] != 'q') && (sentence[1] != 'u') && (sentence[2] != 'i') && (sentence[3] != 't')) {
		printf("Enter input sentence.\n");
		scanf("%s", &sentence);
		for (i = 0; i < 100; i++) {  // ������ ���� ����
			if (sentence[i] != '\0') {
				length++;
			}
			else {
				break;
			}
		}
		for (j = 0, k = length - 1; j < length; j++, k--) {
			// ������ ù��° ���ĺ��� ������ ���ĺ����� ���� ����, ���� �ϸ� ����
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