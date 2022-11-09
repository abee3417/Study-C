/*������ ��� �ؼ��� �Է¹��� ��, ������ �� ����(���� ��������)�� �����Ͽ� ����ϴ� ���α׷�.*/
#include "site.h"
#include <stdio.h>
#include <string.h>
#define MAX 500
void input(struct tourist my[]);
void print(struct tourist *my);
void sort(struct tourist *my, int length);
void swap(char *p, char *q);
int i;
// ���� �Լ�.
int main() {
	struct tourist user[500];
	input(user);
	print(user);
	return 0;
}
// �������� �̸��� �ڸ�Ʈ�� �޴� �Լ�.
void input(struct tourist my[]) {
	int count = 0;
	while (1) {
		printf("Enter the name of place.\n");
		gets(my[i].name);
		if ((my[i].name[0] == 'q') && (my[i].name[1] == 'u') &&
			(my[i].name[2] == 'i') && (my[i].name[3] == 't')) {
			break;
		}
		printf("Enter the Comments.\n");
		gets(my[i].member);
		i++;
		count++;
	}
	sort(my, count);
}
// �������� �̸��� ������������ �����ϴ� �Լ�.
void sort(struct tourist *my, int length) {
	int pass, current;
	for (pass = 1; pass < length; pass++) {
		for (current = 0; current < (length - pass); current++) {
			if (strcmp((my + current)->name, (my + current + 1)->name) > 0) {
				swap((my + current)->name, (my + current + 1)->name);
				swap((my + current)->member, (my + current + 1)->member);
			}
		}
	}
}
// ���� �Լ�.
void swap(char *p, char *q) {
	char temp[MAX];
	strcpy(temp, p);
	strcpy(p, q);
	strcpy(q, temp);
}
// �������� �̸��� �ڸ�Ʈ�� ���ʴ�� ����ϴ� �Լ�.
void print(struct tourist *my){
	int j;
	for (j = 0; j < i; j++) {
		printf("%s : %s\n", (my + j)->name, (my + j)->member);
	}
}