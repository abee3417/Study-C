/*������ �ҽ� �ڵ� ������ �о� �ҽ��ڵ忡 ��Ÿ�� �� �ܾ� ���� �� ���ڼ��� ȭ�鿡 ����ϴ� ���α׷�*/
#include <stdio.h>
int main() {
	char line[100];
	char text;
	int count1 = 0;
	int count2 = 0;
	FILE* fp = fopen("assign13-1.c", "r");
	if (fp == NULL) {
		fprintf(stderr, "Error opening file.\n");
		exit(1);
	}
	while (!feof(fp)) {
		fgets(line, 100, fp);
		printf("%s", line);
		for (int i = 0; i < strlen(line); i++) {
			text = line[i];
			if (text >= '0' && text <= '9') {
				count1++;
				count2++;
			}
			else if (text >= 'A'&& text <= 'Z') {
				count1++;
				count2++;
			}
			else if (text >= 'a'&& text <= 'z') {
				count1++;
				count2++;
			}
			else if (text == ' ' || text == '\n') {
				count1++;
			}
			else if (text == '>' || text == '<' || text == '(' || text == ')'
				|| text == '+' || text == '-' || text == '*' || text == '/'
				|| text == '!' || text == '.' || text == ',') {
				count1++;
			}
			else if (text == ':' || text == ';' || text == '&' || text == '#'
				|| text == '%' || text == '=' || text == '[' || text == ']'
				|| text == '_' || text == '|') {
				count1++;
			}
		}
	}
	printf("\n");
	printf("���� �� : %d,  �ܾ� ��: %d.\n", count2, count1);
	fclose(fp);
	return 0;
}