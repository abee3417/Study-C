/*���� Ž�� ���α׷�*/
#include <stdio.h>
#define MAX 12
// ���� Ž���� ���� �迭�� ������������ ������.
void insertion_sort(int arr[], int length) {
	int a, i, temp;
	for (a = 0; a < length; a++) {
		for (i = (length - 1); i >= 0; i--) {
			if (arr[i] < arr[i - 1]) {
				temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
// ���� Ž������ Ž�� ������ ���� ������ �Է¹��� ��ȣ�� ã�Ƴ�.
int binarySearch(int arr[], int length, int first, int last) {
	int middle;
	if (first > last) {
		return -1;
	}
	else {
		middle = (first + last) / 2;
		if (length > arr[middle]) {
			binarySearch(arr, length, middle + 1, last);
		}
		else if (length < arr[middle]) {
			binarySearch(arr, length, first, middle - 1);
		}
		else {
			return middle;
		}
	}
}
// �迭�� �迭 ������ ã�� ���ڸ� �Է¹ް� �� �Լ��� ���� ���� ���� ���� �����.
int main() {
	int arr[MAX];
	int i, num, result;
	int count = 0;
	printf("Enter data.\n");
	for (i = 0; i < MAX; i++) {
		scanf("%d", &arr[i]);
		count++;
	}
	while (1) {
		printf("Enter data to be searched.\n");
		scanf("%d", &num);
		if (num == -1) {
			break;
		}
		insertion_sort(arr, count);
		result = binarySearch(arr, num, 0, count);
		if (result < 0) {
			printf("No such data.\n");
		}
		else {
			printf("It is in index %d.\n", result);
		}
	}
	return 0;
}