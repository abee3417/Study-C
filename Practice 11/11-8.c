/*���ڿ��� �а� �ʿ��� ��ŭ�� ���� �޸𸮸� Ȯ���Ͽ� ������ �� ����ϴ� ���α׷�*/
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
		// ���� ������ �ϳ��ϳ� ���� ������ realloc�� �Ἥ ũ�⸦ �����ϸ� ����.
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