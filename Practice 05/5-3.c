/*Ű n�� ���ڿ��� �Է¹޾� �װ��� nĭ��ŭ �ǳ� �پ� ���� ���ڷ� ��ȣȭ�ϴ� ���α׷�*/
#include <stdio.h>
int main() {
	int n, i = 0;
	char ch = 0;
	printf("Enter the key.\n");
	scanf("%d", &n);
	printf("Enter the text.\n");
	scanf("%c", &ch);
	while (1) {      //�Է¹��� ���ڿ��� ��ȣȭ�Ѵ�. (10~21)
		scanf("%c", &ch);
		if (ch == '\n') {
			break;
		}
		ch += n;
		while (i < 1) {
			printf("The chpher text is, ");
			i++;
		}
		printf("%c", ch);      //Enter �Է��ϱ� ������ ���� ���ڵ��� ��ȣȭ
	}
	printf("\n", ch);
	return 0;
}