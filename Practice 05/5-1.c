/*����� Ȧ��n�� �Է¹޾Ƽ� ���� ���ڿ� ���� ���� ������ �ٸ��� ����ϴ� ���α׷�*/

#include <stdio.h>
int main() {
	int a, num, star;
	printf("���� Ȧ���� �Է��ϼ���. : ");
	scanf("%d", &num);
	if (((num % 2) != 0) && (num > 0)) {
		printf("-----------------------\n");
		printf("1)\n");
		printf("-----------------------\n");
		for (a = 1; a <= num; a++) {           //���� ������������ ��� (14~19)
			for (star = 1; star <= a; star++) {
				printf("*");
			}
			printf("\n");
		}
		printf("-----------------------\n");
		printf("2)\n");
		printf("-----------------------\n");
		for (a = num; a >= 1; a--) {           //���� ������������ ��� (23~28)
			for (star = a; star >= 1; star--) {
				printf("*");
			}
			printf("\n");
		}
		printf("-----------------------\n");
		printf("3)\n");
		printf("-----------------------\n");
		for (a = 1; a <= num; a += 2) {       //¦������ ���� ������� �ʰ� ���� ������������ ��� (30~35)
			for (star = 1; star <= a; star++) {
				printf("*");
			}
			printf("\n");
		}
		printf("-----------------------\n");
	}
	else {
		printf("�Է� �����Դϴ�.\n");
	}
	return 0;
}