/*�迭�� �ް� �� �迭�� ������ �ݴ�� ������ִ� ���α׷� (�迭 1�� �̿�)*/
#include<stdio.h>
#define MAX 100
// �迭�� ��ܹ޾� ������ �ݴ�� ���ִ� �Լ�.
void swap(int *a, int b) {
	int temp;
	for (int i = 0; i < b / 2; i++) {
		temp = a[i];
		a[i] = a[(b - 1) - i];
		a[(b - 1) - i] = temp;
	}
}
// �迭�� �Է¹ް� swap�Լ��� �ѱ� �� ���� ������� ������ִ� �Լ�.
int main() {
	int arr[MAX];
	int i, j, k, count = 0;
	printf("Put the numbers.\n");
	for (i = 0; i < MAX; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] <= 0) {  //0������ ���� �Է��ϸ� ������.
			break;
		}
		count++;
	}
	printf("Array : ");
	for (j = 0; j < count; j++) {
		printf(" %d ", arr[j]);
	}
	printf("\n");
	swap(arr, count);
	printf("Reverse array : ");
	for (k = 0; k < count; k++) {
		printf(" %d ", arr[k]);
	}
	printf("\n");
	return 0;
}