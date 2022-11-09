#include <stdio.h>

// �����͸� �Է¹ް� ����ϴ� �Լ�
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
void total(int mk_num[20][10], int w_sum[20], int c_sum[10], int mk, int car) {
	// ������ �Ұ踦 ���Ѵ�.
	for (int j = 0; j < mk; j++) {
		for (int k = 0; k < car; k++) {
			w_sum[j] += mk_num[j][k];
		}
	}
	// ������ �Ұ踦 ���Ѵ�.
	for (int y = 0; y < car; y++) {
		for (int z = 0; z < mk; z++) {
			c_sum[y] += mk_num[z][y];
		}
	}
	printf("=============================================\n");
	printf("1. �븮���� ������ �հ谡 ���Ե� ����Դϴ�.\n");
}

// ���� �� �븮���ϼ��� ���� ���� �ϰԲ� ������ �ٲٴ� �Լ�
void best_mk(char mk_name[10][100], int mk_num[20][10], int w_sum[20], int mk) {
	int pass, current, temp;
	char save[10][100];
	for (pass = 1; pass < mk; pass++) {
		for (current = 0; current < (mk - pass); current++) {
			if (w_sum[current] < w_sum[current + 1]) {
				// �Ұ��� ��ġ�� �ٲ۴�.
				temp = w_sum[current];
				w_sum[current] = w_sum[current + 1];
				w_sum[current + 1] = temp;
				// ���� �̸��� ��ġ�� �ٲ۴�.
				for (int i = 0; i < 100; i++) {
					save[current][i] = mk_name[current][i];
					mk_name[current][i] = mk_name[current + 1][i];
					mk_name[current + 1][i] = save[current][i];
				}
				// ���� �� �ǸŽ����� ��ġ�� �ٲ۴�.
				for (int j = 0; j < mk; j++) {
					temp = mk_num[current][j];
					mk_num[current][j] = mk_num[current + 1][j];
					mk_num[current + 1][j] = temp;
				}
			}
		}
	}
	printf("=============================================\n");
	printf("2. ���� �� �븮���� ���� ���� ���� ��� ���� �մϴ�.\n");
}

// ���� �ȸ� �� ���ϼ��� �������� ���� �ϰԲ� ������ �ٲٴ� �Լ�
void best_car(char car_name[10][100], int mk_num[20][10], int c_sum[10], int mk) {
	int pass, current, temp;
	char save[10][100];
	for (pass = 1; pass < mk; pass++) {
		for (current = 0; current < (mk - pass); current++) {
			if (c_sum[current] < c_sum[current + 1]) {
				// �Ұ��� ��ġ�� �ٲ۴�.
				temp = c_sum[current];
				c_sum[current] = c_sum[current + 1];
				c_sum[current + 1] = temp;
				// ���� �̸��� ��ġ�� �ٲ۴�.
				for (int i = 0; i < 100; i++) {
					save[current][i] = car_name[current][i];
					car_name[current][i] = car_name[current + 1][i];
					car_name[current + 1][i] = save[current][i];
				}
				// ���� �� �ǸŽ����� ��ġ�� �ٲ۴�.
				for (int j = 0; j < mk; j++) {
					temp = mk_num[j][current];
					mk_num[j][current] = mk_num[j][current + 1];
					mk_num[j][current + 1] = temp;
				}
			}
		}
	}
	printf("=============================================\n");
	printf("3. ���� �ȸ� ���� ���ʿ� ������ ������� �����մϴ�.\n");
}

// �����͵��� �ٽ� �迭�ϴ� �Լ�
void print_array(char car_name[10][100], char mk_name[10][100], int mk_num[20][10], int w_sum[20], int c_sum[10], int mk, int car) {
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
	total(mk_num, w_sum, c_sum, mk, car);
	print_array(car_name, mk_name, mk_num, w_sum, c_sum, mk, car);
	best_mk(mk_name, mk_num, w_sum, mk);
	print_array(car_name, mk_name, mk_num, w_sum, c_sum, mk, car);
	best_car(car_name, mk_num, c_sum, mk);
	print_array(car_name, mk_name, mk_num, w_sum, c_sum, mk, car);
	return 0;
}