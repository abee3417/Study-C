/*�迭�� �ް� �� �迭�� ������ �ݴ�� ������ִ� ���α׷� (�迭 2�� �̿�)*/
#include <stdio.h>
#define MAX 100
// �迭�� �ݴ�� ���ִ� �Լ�.
int* reverse_array(int *a, int *b) {
	int count = 0;
	int index = 0;
	while (a[count] != '\0') {
		count++;
	}
	count--;
	while (count != -1) {
		b[index] = a[count];
		count--;
		index++;
	}
	return b;
}
// �迭�� �ް� reverse_array�Լ��� ���� ���� ���� ����� ������ִ� �Լ�.
int main() {
	int arr1[MAX], arr2[MAX];
	int *arr2_a = &arr2;
	int temp, print = 0;
	int count1 = 0;
	int count2 = 0;
	while (1) {
		if (print == 0) {
			printf("Put the numbers.\n");
			print++;
		}
		scanf("%d", &temp);
		if (temp <= 0) {  // 0������ ���� �Է��ϸ� �����Ѵ�.
			break;
		}
		else {
			arr1[count1] = temp;
			count1++;
		}
	}
	arr1[count1] = '\0';
	count1--;
	arr2_a = reverse_array(arr1, arr2);
	printf("Array : ");
	while (count2 <= count1) {
		printf(" %d ", arr1[count2]);
		count2++;
	}
	count2 = 0;
	printf("\n");
	printf("Reverse array : ");
	while (count2 <= count1) {
		printf(" %d ", arr2[count2]);
		count2++;
	}
	return 0;
}