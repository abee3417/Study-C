/*입력받은 배열과 배열 속에서의 최댓값과 최솟값을 출력해주는 프로그램*/
#include <stdio.h>
#include <limits.h>
#define MAX 100
// 배열을 넘겨받고 최댓값과 최솟값을 판정해주는 함수.
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
// 배열을 입력받고 min_max함수로 배열을 넘긴 후 받은 결과값을 출력해주는 함수.
int main() {
	int arr[MAX] = { 0 }, large, small;
	int i, j, count = 0;
	printf("Put the number.\n");
	for (i = 0; i < MAX; i++) {
		scanf("%d", &arr[i]);
		count++;
		if (arr[i] <= 0) {  // 0이하의 숫자를 입력받을 시 종료.
			break;
		}
	}
	min_max(arr, &large, &small);
	printf("Array : ");
	for (j = 0; j < (count - 1); j++) {
	// 배열 뒤의 trash값 표시를 하지 않고 0을 배열에 표시하지 않기 위해 변수 count를 이용.
		printf(" %d ", arr[j]);
	}
	printf("\n");
	printf("Max : %d, Min : %d.\n", large, small);
	return 0;
}