/*�Է¹��� �迭�� �迭 �ӿ����� �ִ񰪰� �ּڰ��� ������ִ� ���α׷�*/
#include <stdio.h>
#include <limits.h>
#define MAX 100
// �迭�� �Ѱܹް� �ִ񰪰� �ּڰ��� �������ִ� �Լ�.
void min_max(int *a, int *b, int *c) {
	int i, j;
	int max = 0, min = INT_MAX;
	for (i = 0; i < MAX; i++) {
		if (*a <= 0) {
			break;
		}
		if (*a > max) {
			max = *a;
		}
		if (*a < min) {
			min = *a;
		}
		*a++;
	}
	*b = max;
	*c = min;
}
// �迭�� �Է¹ް� min_max�Լ��� �迭�� �ѱ� �� ���� ������� ������ִ� �Լ�.
int main() {
	int arr[MAX] = { 0 }, large, small;
	int i, j, count = 0;
	printf("Put the number.\n");
	for (i = 0; i < MAX; i++) {
		scanf("%d", &arr[i]);
		count++;
		if (arr[i] <= 0) {  // 0������ ���ڸ� �Է¹��� �� ����.
			break;
		}
	}
	min_max(arr, &large, &small);
	printf("Array : ");
	for (j = 0; j < (count - 1); j++) {
	// �迭 ���� trash�� ǥ�ø� ���� �ʰ� 0�� �迭�� ǥ������ �ʱ� ���� ���� count�� �̿�.
		printf(" %d ", arr[j]);
	}
	printf("\n");
	printf("Max : %d, Min : %d.\n", large, small);
	return 0;
}