/* ��ȣ1, 2, 3���� ���� ��ǥ�Ͽ� �缱�ڰ� �������� �˷��ִ� ���α׷�
(��, �缱�ڰ� �Ƿ��� ���ݼ� ��ǥ�� �����ؾ� �ȴ�.) */
// 7-6 ���� �޸� �ٸ� ���ڵ��� ����ϸ鼭 �缱�ڸ� �����ϴ� ����̴�.
#include <stdio.h>
int main() {
	int votes[1000], temp[1000];
	int i, j, k;
	int winner = 0, count = 0;
	printf("Enter the votes.\n");
	for (i = 0; i < 1000; i++) {
		scanf("%d", &votes[i]);
		if (votes[i] == -1) {  // -1�� �Է��ϸ� ����.
			break;
		}
	}
	for (j = 0; j < i; j++) {  // �缱�ڸ� ���ϴ� ���� (16 ~ 47)
		temp[j] = votes[j];
	}
	for (j = 0; j < i; j++) {  
		for (k = 0; k < i; k++) {
			if ((temp[j] != temp[k]) && (temp[j] != 0) && (temp[k] != 0) && (temp[j] <= 3)
				&& (temp[k] <= 3) && (temp[j] > 0) && (temp[j] > 0)) {
				temp[j] = temp[k] = 0;
			}
		}
	}
	for (j = 0; j < i; j++) {
		if ((temp[j] != 0) && (temp[j] <= 3) && (temp[j] > 0)) {
			winner = temp[j];
			break;
		}
	}
	if (winner == 0) {
		printf("No winner.\n");
		return 0;
	}
	for (j = 0; j < i; j++) {
		if (votes[j] == winner) {
			count++;
		}
	}
	if (count > (k - 1) / 2) {
		printf("Number %d is winner.\n", winner);
	}
	else {
		printf("No winner.\n");
	}
	return 0;
}