/*아이디가 규칙에 맞는지 어긋나는지 판단해주는 프로그램*/
// 규칙1 : 반드시 세 개의 문자로 구성해야 한다.
// 규칙2 : 알파벳 소문자로 시작해야 한다.
// 규칙3 : 중간에 반드시 숫자가 하나 이상 들어가야 한다.

#include <stdio.h>
int main() {
	char id1, id2;
	int pass, letter;
	while (1) {
		id2 = 0;
		pass = 0;
		letter = 0;
		printf("Enter an id.\n");
		scanf("%c", &id1);
		while (id2 != '\n') {      //규칙 3을 검토하면서 글자수를 계산 (16~22)
			scanf("%c", &id2);
			if ((id1 >= 48) && (id1 <= 57) || (id2 >= 48) && (id2 <= 57)) {
				pass++;
			}
			letter++;
		}
		if ((id1 == 49) && (id2 == '\n')) {
			break;
		}
		if ((letter != 3) || (id1 <= 96) || (id1 >= 123) || (pass == 0)) {
			printf("It‘s illegal.\n");
		}
		//규칙1, 규칙2, 규칙3중 하나라도 어긋난 경우 > illegal 출력 (26~28)
		else {
			printf("It‘s legal.\n");
		}
	}
	return 0;
}