/*�Ϸ��� �ڿ����� �Է¹޾� ���������� ��հ��� ����ϴ� ���α׷�*/
#include <stdio.h>
int main() {
	int num, i;
	double sum;
	printf("Enter an integer.\n");
	scanf("%d", &num);
	if (num <= 0) {      //ó������ 0�̳� ������ ������ ����� 0�̶�� �ϰ� ����
		printf("Current average is 0.000.\n");
		return 0;
	}
	else {
		sum = num;
		printf("Current average is %.3lf.\n", sum);
	}

	while (1) {      //�ڿ����� �޾� ��հ��� ����ϰ� ����ϴ� ������ �ݺ� (17~29)
		for (i = 2; i != 0; i++) {
			printf("Enter an integer.\n");
			scanf("%d", &num);
			double result;
			if (num < 0) {
				return 0;
			}
			sum = sum + num;
			result = sum / i;
			printf("Current average is %.3lf.\n", result);
		}
	}
	return 0;
}