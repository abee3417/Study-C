// 주어진 배열의 평균값을 각각 배열기호, 포인터 산술연산으로 구하는 프로그램
#include <stdio.h>
// 배열 기호로 평균을 구함
int average_by_array(int p[], int n) { 
	int i, sum = 0;
	for (i = 0; i < 5; i++) {
		sum += p[i];
	}
	sum /= 5;
	return sum;
}
// 포인터 산술연산으로 평균을 구함
int average_by_pointer(int *p, int n) { 
	int i, sum = 0;
	for (i = 0; i < 5; i++) {
		sum += *(p + i);
	}
	sum /= 5;
	return sum;
}
// 함수를 호출하여 평균값을 출력함
int main() {
	int arr[5] = { 10, 40, 50, 20, 15 };
	printf("%d\n", average_by_array(arr, 5));
	printf("%d\n", average_by_pointer(arr, 5));
	return 0;
}
