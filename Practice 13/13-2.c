/*�ؽ�Ʈ ���� �̸��� �Է� ���� ��, �� ���� ������ ��ȣȭ�Ͽ� ����� encrypt.txt ������ �ۼ�.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	char name[100];
	int ch1, ch2, check = 1;
	printf("Enter the name of file to find : ");
	gets(name);
	FILE* file1 = fopen(name, "rt");
	FILE* encrypt = fopen("C:\\test\\encrypt.txt", "wt");
	while ((ch1 = getc(file1)) != EOF) {
		fputc(ch1 + 2, encrypt);
	}
	fclose(file1);
	fclose(encrypt);
	FILE* encryptr = fopen("C:\\test\\encrypt.txt", "rt");
	FILE* original = fopen("C:\\test\\original.txt", "wt");
	FILE* file2 = fopen(name, "rt");
	if ((encryptr == NULL) || (original == NULL) || (file2 == NULL)) {
		exit(1);
	}
	while ((ch1 = getc(encryptr)) != EOF) {
		fputc(ch1 - 2, original);
		ch2 = getc(file2);
		if (ch2 != ch1 - 2)	{
			check = 0;
		}
	}
	fclose(encryptr);
	fclose(original);
	fclose(file2);
	if (check == 0) {
		printf("��ġ���� �ʽ��ϴ�.\n");
	}
	else {
		printf("��ġ�մϴ�.\n");
	}
	return 0;
}