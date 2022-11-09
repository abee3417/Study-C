/*키 n과 문자열을 입력받아 그것을 n칸만큼 건너 뛰어 나중 문자로 암호화하는 프로그램*/
#include <stdio.h>
int main() {
	int n, i = 0;
	char ch = 0;
	printf("Enter the key.\n");
	scanf("%d", &n);
	printf("Enter the text.\n");
	scanf("%c", &ch);
	while (1) {      //입력받은 문자열을 암호화한다. (10~21)
		scanf("%c", &ch);
		if (ch == '\n') {
			break;
		}
		ch += n;
		while (i < 1) {
			printf("The chpher text is, ");
			i++;
		}
		printf("%c", ch);      //Enter 입력하기 전까지 남은 문자들을 암호화
	}
	printf("\n", ch);
	return 0;
}