/*������ ���ĺ� ������ ����� ������ִ� ���α׷�*/
#include <stdio.h>
int main() {
	char ch;
	int count = 0;
	printf("Enter a sentence.\n");
	while (1) {      //���� ���忡�� ������ ã�´�. (7~17)
		scanf("%c", &ch);
		if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || 
				(ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') || 
				(ch == 'O') || (ch == 'U')) {
		    count++;
			}
		else if (ch == '\n') {
			break;
			}
		}
	printf("Vowels appear %d times.\n", count);
	return 0;
}