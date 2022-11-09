/*문자열을 읽고 필요한 만큼의 동적 메모리를 확보하여 저장한 후 출력하는 프로그램*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	char ch;
	char *p;
	int length = 0, i;
	p = (char*)malloc(sizeof(char) + 1);
	if (p == NULL) {
		exit(1);
	}
	while (1) {
		scanf("%c", &ch);
		if (ch == '\n') {
			break;
		}
		p[length] = ch;
		// 문자 단위로 하나하나 들어올 때마다 realloc을 써서 크기를 증가하며 읽음.
		p = (char*)realloc(p, (length + 1) * sizeof(char) + 1);
		length++;
		if (p == NULL){
			exit(1);
		}
	}
	for (i = 0; i < length; i++) {
		printf("%c", p[i]);
	}
	printf("\n");
	return 0;
}