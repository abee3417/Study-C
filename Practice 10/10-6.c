// 행렬의 곱을 출력하는 프로그램
#include <stdio.h>
#include <stdlib.h>
int main() {
	int A[2][3] = { 1, 2, 3, 4, 5, 6 };
	int B[3][2] = { 7, 8, 9, 10, 11, 12 };
	int C[2][2] = { 0 };
	int i, j, k, a, b;
	printf("A[2][3] = {1 2 3 4 5 6 }\n");
	printf("B[3][2] = {7 8 9 10 11 12 }\n");
	// A행렬과 B행렬을 곱한 값을 C행렬에 대입.
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			for (k = 0; k < 3; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf("Then C[2][2] = {");
	for (a = 0; a < 2; a++) {
		for (b = 0; b < 2; b++) {
			printf("%d ", C[a][b]);
		}
	}
	printf("}\n");
	return 0;
}