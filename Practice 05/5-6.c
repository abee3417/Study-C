/*거슬러 줄 금액을 입력받아 얼마짜리 동전을 몇 개를 주어야 하는지 출력하는 프로그램 */
#include <stdio.h>
int main() {
	int change, result;
	int coin1 = 0, coin2 = 0, coin3 = 0, coin4 = 0;
	printf("Enter the change.\n");
	scanf("%d", &change);
	int count = change;
	while (count >= 500) {      // 500원이 몇 개가 필요한지 계산
		count -= 500;
		coin1++;
	}
	while (count >= 100) {      // 100원이 몇 개가 필요한지 계산
		count -= 100;
		coin2++;
	}
	while (count >= 50) {      // 50원이 몇 개가 필요한지 계산
		count -= 50;
		coin3++;
	}
	while (count >= 10) {      // 10원이 몇 개가 필요한지 계산
		count -= 10;
		coin4++;
	}
	printf("500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개.\n", coin1, coin2, coin3, coin4);
	return 0;
}