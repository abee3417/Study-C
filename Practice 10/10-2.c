#include <stdio.h>

// 데이터를 입력받고 출력하는 함수
void start(char car_name[10][100], char mk_name[10][100], int mk_num[20][10], int *mk, int *car) {
	int x, y;  // x값은 지점 수 mk, y값은 차종 수 car로 리턴하기 위해 변수선언.
	printf("==========자동차 판매 집계 프로그램==========\n");
	printf("지점수, 차종수, 차종이름, 판매실적을 입력해주세요.\n");
	// 전체 데이터 입력
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
	// 전체 데이터 출력
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

// 지점별 소계와 차종별 소계까지 출력하는 함수
void total(int mk_num[20][10], int w_sum[20], int c_sum[10], int mk, int car) {
	// 지점별 소계를 구한다.
	for (int j = 0; j < mk; j++) {
		for (int k = 0; k < car; k++) {
			w_sum[j] += mk_num[j][k];
		}
	}
	// 차종별 소계를 구한다.
	for (int y = 0; y < car; y++) {
		for (int z = 0; z < mk; z++) {
			c_sum[y] += mk_num[z][y];
		}
	}
	printf("=============================================\n");
	printf("1. 대리점별 차량별 합계가 포함된 결과입니다.\n");
}

// 많이 판 대리점일수록 위로 오게 하게끔 순서를 바꾸는 함수
void best_mk(char mk_name[10][100], int mk_num[20][10], int w_sum[20], int mk) {
	int pass, current, temp;
	char save[10][100];
	for (pass = 1; pass < mk; pass++) {
		for (current = 0; current < (mk - pass); current++) {
			if (w_sum[current] < w_sum[current + 1]) {
				// 소계의 위치를 바꾼다.
				temp = w_sum[current];
				w_sum[current] = w_sum[current + 1];
				w_sum[current + 1] = temp;
				// 지점 이름의 위치를 바꾼다.
				for (int i = 0; i < 100; i++) {
					save[current][i] = mk_name[current][i];
					mk_name[current][i] = mk_name[current + 1][i];
					mk_name[current + 1][i] = save[current][i];
				}
				// 지점 별 판매실적의 위치를 바꾼다.
				for (int j = 0; j < mk; j++) {
					temp = mk_num[current][j];
					mk_num[current][j] = mk_num[current + 1][j];
					mk_num[current + 1][j] = temp;
				}
			}
		}
	}
	printf("=============================================\n");
	printf("2. 많이 판 대리점을 위로 오게 순서 대로 정렬 합니다.\n");
}

// 많이 팔린 차 종일수록 왼쪽으로 오게 하게끔 순서를 바꾸는 함수
void best_car(char car_name[10][100], int mk_num[20][10], int c_sum[10], int mk) {
	int pass, current, temp;
	char save[10][100];
	for (pass = 1; pass < mk; pass++) {
		for (current = 0; current < (mk - pass); current++) {
			if (c_sum[current] < c_sum[current + 1]) {
				// 소계의 위치를 바꾼다.
				temp = c_sum[current];
				c_sum[current] = c_sum[current + 1];
				c_sum[current + 1] = temp;
				// 차량 이름의 위치를 바꾼다.
				for (int i = 0; i < 100; i++) {
					save[current][i] = car_name[current][i];
					car_name[current][i] = car_name[current + 1][i];
					car_name[current + 1][i] = save[current][i];
				}
				// 지점 별 판매실적의 위치를 바꾼다.
				for (int j = 0; j < mk; j++) {
					temp = mk_num[j][current];
					mk_num[j][current] = mk_num[j][current + 1];
					mk_num[j][current + 1] = temp;
				}
			}
		}
	}
	printf("=============================================\n");
	printf("3. 많이 팔린 차를 왼쪽에 오도록 순서대로 정렬합니다.\n");
}

// 데이터들을 다시 배열하는 함수
void print_array(char car_name[10][100], char mk_name[10][100], int mk_num[20][10], int w_sum[20], int c_sum[10], int mk, int car) {
	printf("\t");
	for (int a = 0; a < car; a++) {
		printf("%s ", car_name[a]);
	}
	printf("소계\n");
	for (int b = 0; b < mk; b++) {
		printf("%s\t", mk_name[b]);
		for (int c = 0; c < car; c++) {
			printf("%d    ", mk_num[b][c]);
		}
		printf("%d", w_sum[b]);
		printf("\n");
	}
	printf("소 계\t");
	for (int d = 0; d < car; d++) {
		printf("%d   ", c_sum[d]);
	}
	printf("\n");
}

int main() {
	int mk, car;
	char car_name[10][100];  // 자동차 이름 받는 이차원배열
	char mk_name[10][100];  // 지점 이름 받는 이차원배열
	int mk_num[20][10];  // 지점의 판매실적을 받는 이차원배열
	int w_sum[20] = { 0 }; // 지점별 판매실적 합계 (가로줄 합계)
	int c_sum[10] = { 0 };  // 자동차별 판매실적 합계 (세로줄 합계)
	start(car_name, mk_name, mk_num, &mk, &car);
	total(mk_num, w_sum, c_sum, mk, car);
	print_array(car_name, mk_name, mk_num, w_sum, c_sum, mk, car);
	best_mk(mk_name, mk_num, w_sum, mk);
	print_array(car_name, mk_name, mk_num, w_sum, c_sum, mk, car);
	best_car(car_name, mk_num, c_sum, mk);
	print_array(car_name, mk_name, mk_num, w_sum, c_sum, mk, car);
	return 0;
}