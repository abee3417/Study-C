/*���̵� ��Ģ�� �´��� ��߳����� �Ǵ����ִ� ���α׷�*/
// ��Ģ1 : �ݵ�� �� ���� ���ڷ� �����ؾ� �Ѵ�.
// ��Ģ2 : ���ĺ� �ҹ��ڷ� �����ؾ� �Ѵ�.
// ��Ģ3 : �߰��� �ݵ�� ���ڰ� �ϳ� �̻� ���� �Ѵ�.

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
		while (id2 != '\n') {      //��Ģ 3�� �����ϸ鼭 ���ڼ��� ��� (16~22)
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
			printf("It��s illegal.\n");
		}
		//��Ģ1, ��Ģ2, ��Ģ3�� �ϳ��� ��߳� ��� > illegal ��� (26~28)
		else {
			printf("It��s legal.\n");
		}
	}
	return 0;
}