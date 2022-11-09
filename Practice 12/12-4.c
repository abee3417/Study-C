/*관광지 명과 해설을 입력받은 후, 관광지 명 순서(오름 차순으로)로 정렬하여 출력하는 프로그램.*/
#include "site.h"
#include <stdio.h>
#include <string.h>
#define MAX 500
void input(struct tourist my[]);
void print(struct tourist *my);
void sort(struct tourist *my, int length);
void swap(char *p, char *q);
int i;
// 메인 함수.
int main() {
	struct tourist user[500];
	input(user);
	print(user);
	return 0;
}
// 관광지의 이름과 코멘트를 받는 함수.
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
// 관광지의 이름을 오름차순으로 정렬하는 함수.
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
// 스왑 함수.
void swap(char *p, char *q) {
	char temp[MAX];
	strcpy(temp, p);
	strcpy(p, q);
	strcpy(q, temp);
}
// 관광지의 이름과 코멘트를 차례대로 출력하는 함수.
void print(struct tourist *my){
	int j;
	for (j = 0; j < i; j++) {
		printf("%s : %s\n", (my + j)->name, (my + j)->member);
	}
}