/*�Ž��� �� �ݾ��� �Է¹޾� ��¥�� ������ �� ���� �־�� �ϴ��� ����ϴ� ���α׷� */
#include <stdio.h>
int main() {
	int change, result;
	int coin1 = 0, coin2 = 0, coin3 = 0, coin4 = 0;
	printf("Enter the change.\n");
	scanf("%d", &change);
	int count = change;
	while (count >= 500) {      // 500���� �� ���� �ʿ����� ���
		count -= 500;
		coin1++;
	}
	while (count >= 100) {      // 100���� �� ���� �ʿ����� ���
		count -= 100;
		coin2++;
	}
	while (count >= 50) {      // 50���� �� ���� �ʿ����� ���
		count -= 50;
		coin3++;
	}
	while (count >= 10) {      // 10���� �� ���� �ʿ����� ���
		count -= 10;
		coin4++;
	}
	printf("500�� %d��, 100�� %d��, 50�� %d��, 10�� %d��.\n", coin1, coin2, coin3, coin4);
	return 0;
}