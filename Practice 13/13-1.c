/*현재의 소스 코드 파일을 읽어 소스코드에 나타난 총 단어 수와 총 문자수를 화면에 출력하는 프로그램*/
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
	printf("문자 수 : %d,  단어 수: %d.\n", count2, count1);
	fclose(fp);
	return 0;
}