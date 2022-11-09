/* 기호1, 2, 3번에 대해 투표하여 당선자가 누구인지 알려주는 프로그램
(단, 당선자가 되려면 과반수 득표에 성공해야 된다.) */
// 7-6 과는 달리 다른 숫자들을 상쇄하면서 당선자를 선출하는 방식이다.
#include <stdio.h>
int main() {
	int votes[1000], temp[1000];
	int i, j, k;
	int winner = 0, count = 0;
	printf("Enter the votes.\n");
	for (i = 0; i < 1000; i++) {
		scanf("%d", &votes[i]);
		if (votes[i] == -1) {  // -1를 입력하면 종료.
			break;
		}
	}
	for (j = 0; j < i; j++) {  // 당선자를 정하는 과정 (16 ~ 47)
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