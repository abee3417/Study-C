/*삽입 정렬 프로그램*/
#include <stdio.h>
#define MAX 100
// 배열을 표시해주는 함수.
void print_array(const int arr[], int length) {
	int i;
	for (i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
// 배열의 끝에서부터 두 숫자를 비교하여 더 작은 숫자를 앞으로 보냄.
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
// 배열을 입력받고 각 함수로 배열을 보냄.
int main() {
	int i, arr[MAX];
	int count = 0;
	printf("Enter input numbers.\n");
	for (i = 0; i < MAX; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == -1) {
			break;
		}
		count++;
	}
	printf("Before : ");
	print_array(arr, count);
	insertion_sort(arr, count);
	printf("After : ");
	print_array(arr, count);
	return 0;
}