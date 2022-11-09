#include <stdio.h>
int is_digit(int ch) {      //숫자와 문자를 판별해주는 함수
	if ((ch >= 48) && (ch < 57)) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {      //받은 text에서 숫자가 몇개인지 출력해주는 함수
	int word;
	char ch[5];
	printf("Enter a 5-letter word.\n");
	scanf("%c%c%c%c%c", &ch[0], &ch[1], &ch[2], &ch[3], &ch[4]);
	word = is_digit(ch[0]) + is_digit(ch[1]) + is_digit(ch[2]) + is_digit(ch[3]) + is_digit(ch[4]);
	printf("Digit apears %d times.\n", word);
	return 0;
}