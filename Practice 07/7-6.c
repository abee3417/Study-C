/* ��ȣ1, 2, 3���� ���� ��ǥ�Ͽ� �缱�ڰ� �������� �˷��ִ� ���α׷�
(��, �缱�ڰ� �Ƿ��� ���ݼ� ��ǥ�� �����ؾ� �ȴ�.) */
#include <stdio.h>
int main() {
	int votes[1000];
	int i;
	int total1 = 0;
	int total2 = 0;
	int total3 = 0;
	printf("Enter the votes.\n");
	for (i = 0; i < 1000; i++) {  // -1�� �Է��Ҷ� ���� ��� ��ǥ�� ����.
		scanf("%d", &votes[i]);
		if (votes[i] == 1) {
			total1++;
		}
		else if (votes[i] == 2) {
			total2++;
		}
		else if (votes[i] == 3) {
			total3++;
		}
		else if (votes[i] == -1) {
			break;
		}
		else {
			printf("Error.\n");
			return 0;
		}
	}
	// ��ǥ���� ���� ����, ���ݼ��� �Ѱ� �Ǹ� �缱�ǰԲ� ����.
	if ((total1 > total2) && (total1 > total3) && (total1 >= ((i / 2) + 1))) {
		printf("Number 1 is the winner.\n");
	}
	else if ((total2 > total1) && (total2 > total3) && (total2 >= ((i / 2) + 1))) {
		printf("Number 2 is the winner.\n");
	}
	else if ((total3 > total1) && (total3 > total2) && (total3 >= ((i / 2) + 1))) {
		printf("Number 3 is the winner.\n");
	}
	else {
		printf("No winner.\n");
	}
	return 0;
}