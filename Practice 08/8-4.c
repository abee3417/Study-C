/*배열을 받고 그 배열의 순서를 반대로 출력해주는 프로그램 (배열 2개 이용)*/
#include <stdio.h>
#define MAX 100
// 배열을 반대로 해주는 함수.
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
// 배열을 받고 reverse_array함수로 보낸 다음 받은 결과를 출력해주는 함수.
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
		if (temp <= 0) {  // 0이하의 수를 입력하면 종료한다.
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