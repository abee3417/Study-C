#include <stdio.h>
// �����͸� �Է¹ް� ����ϴ� start �Լ�
void start(char car_name[10][100], char mk_name[10][100], int mk_num[20][10], int *mk, int *car) {
	int x, y;  // x���� ���� �� mk, y���� ���� �� car�� �����ϱ� ���� ��������.
	printf("==========�ڵ��� �Ǹ� ���� ���α׷�==========\n");
	printf("������, ������, �����̸�, �ǸŽ����� �Է����ּ���.\n");
	// ��ü ������ �Է�
	scanf("%d%d", &x, &y);
	for (int i = 0; i < y; i++) {
		scanf("%s", car_name[i]);
	}
	for (int j = 0; j < x; j++) {
		scanf("%s", mk_name[j]);
		for (int k = 0; k < y; k++) {
			scanf("%d", &mk_num[j][k]);
		}
	}
	printf("=============================================\n");
	// ��ü ������ ���
	printf("\t");
	for (int a = 0; a < y; a++) {
		printf("%s ", car_name[a]);
	}
	printf("\n");
	for (int b = 0; b < x; b++) {
		printf("%s\t", mk_name[b]);
		for (int c = 0; c < y; c++) {
			printf("%d    ", mk_num[b][c]);
		}
		printf("\n");
	}
	*mk = x;
	*car = y;
}
// ������ �Ұ�� ������ �Ұ���� ����ϴ� �Լ�
void total(char car_name[10][100], char mk_name[10][100], int mk_num[20][10], int w_sum[20], int c_sum[10], int mk, int car) {
	for (int j = 0; j < mk; j++) {
		for (int k = 0; k < car; k++) {
			w_sum[j] += mk_num[j][k];
		}
	}
	for (int y = 0; y < car; y++) {
		for (int z = 0; z < mk; z++) {
			c_sum[y] += mk_num[z][y];
		}
	}
	printf("=============================================\n");
	printf("1. �븮���� ������ �հ谡 ���Ե� ����Դϴ�.\n");
	printf("\t");
	for (int a = 0; a < car; a++) {
		printf("%s ", car_name[a]);
	}
	printf("�Ұ�\n");
	for (int b = 0; b < mk; b++) {
		printf("%s\t", mk_name[b]);
		for (int c = 0; c < car; c++) {
			printf("%d    ", mk_num[b][c]);
		}
		printf("%d", w_sum[b]);
		printf("\n");
	}
	printf("�� ��\t");
	for (int d = 0; d < car; d++) {
		printf("%d   ", c_sum[d]);
	}
	printf("\n");
}
int main() {
	int mk, car;
	char car_name[10][100];  // �ڵ��� �̸� �޴� �������迭
	char mk_name[10][100];  // ���� �̸� �޴� �������迭
	int mk_num[20][10];  // ������ �ǸŽ����� �޴� �������迭
	int w_sum[20] = { 0 }; // ������ �ǸŽ��� �հ� (������ �հ�)
	int c_sum[10] = { 0 };  // �ڵ����� �ǸŽ��� �հ� (������ �հ�)
	start(car_name, mk_name, mk_num, &mk, &car);
	total(car_name, mk_name, mk_num, w_sum, c_sum, mk, car);
	return 0;
}