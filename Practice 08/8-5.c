/*배열을 받고 그 배열의 순서를 반대로 출력해주는 프로그램 (배열 1개 이용)*/
#include<stdio.h>
#define MAX 100
// 배열을 념겨받아 순서를 반대로 해주는 함수.
void swap(int *a, int b) {
	int temp;
	for (int i = 0; i < b / 2; i++) {
		temp = a[i];
		a[i] = a[(b - 1) - i];
		a[(b - 1) - i] = temp;
	}
}
// 배열을 입력받고 swap함수에 넘긴 후 받은 결과값을 출력해주는 함수.
int main() {
	int arr[MAX];
	int i, j, k, count = 0;
	printf("Put the numbers.\n");
	for (i = 0; i < MAX; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] <= 0) {  //0이하의 수를 입력하면 끝낸다.
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