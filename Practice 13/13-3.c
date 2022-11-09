/*세 사람의 정보를 in.txt에 저장하고 텍스트를 읽어 화면에 출력한 뒤, 
2진 파일 out.bin 을 만들어 저장하고, 그 파일에 한 사람의 정보를 더 추가한뒤 모든 정보를
화면에 출력하는 프로그램.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 500
typedef struct {
	char name[50];
	char s_num[50];
	char c_num[MAX];
}call_num;
int main() {
	FILE* information = fopen("C:\\test\\in.txt", "wt");
	call_num* user;
	char buff[MAX];
	int i;
	int ch;
	user = malloc(sizeof(call_num) * 4);
	for (i = 0; i < 3; i++) {
		printf("Enter the user name.\n");
		gets(buff);
		strcpy((user + i)->name, buff);
		fputs(buff, information);
		fputs(" ", information);
		printf("Enter the student number.\n");
		gets(buff);
		strcpy((user + i)->s_num, buff);
		fputs(buff, information);
		fputs(" ", information);
		printf("Enter the call number.\n");
		gets(buff);
		strcpy((user + i)->c_num, buff);
		fputs(buff, information);
		fputs("\n", information);
	}
	fclose(information);
	information = fopen("C:\\test\\in.txt", "rt");
	FILE* binary = fopen("C:\\test\\out.bin", "wb");
	while ((ch = getc(information)) != EOF) {
		printf("%c", ch);
	}

	for (i = 0; i < 3; i++) {
		fwrite((void*)&user[i], sizeof(call_num), 1, binary);
		fflush(stdin);
	}
	fclose(information);
	fclose(binary);
	binary = fopen("C:\\test\\out.bin", "ab");
	printf("Enter the user name.\n");
	gets(buff);
	strcpy((user + 3)->name, buff);
	printf("Enter the student number.\n");
	gets(buff);
	strcpy((user + 3)->s_num, buff);
	printf("Enter the call number.\n");
	gets(buff);
	strcpy((user + 3)->c_num, buff);
	fwrite((void*)&user[3], sizeof(call_num), 1, binary);
	fflush(stdin);
	fclose(binary);
	binary = fopen("C:\\test\\out.bin", "rb");
	for (i = 0; i < 4; i++) {
		fread((void*)&user[i], sizeof(call_num), 1, binary);
		printf("name : %s, student number : %s, phone number : %s. \n", 
			(user + i)->name, (user + i)->s_num, (user + i)->c_num);
	}
	fclose(binary);
	return 0;
}