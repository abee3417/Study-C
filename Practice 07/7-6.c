/* 기호1, 2, 3번에 대해 투표하여 당선자가 누구인지 알려주는 프로그램
(단, 당선자가 되려면 과반수 득표에 성공해야 된다.) */
#include <stdio.h>
int main() {
	int votes[1000];
	int i;
	int total1 = 0;
	int total2 = 0;
	int total3 = 0;
	printf("Enter the votes.\n");
	for (i = 0; i < 1000; i++) {  // -1을 입력할때 까지 계속 투표를 진행.
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
	// 득표수가 가장 많고, 과반수를 넘게 되면 당선되게끔 설정.
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