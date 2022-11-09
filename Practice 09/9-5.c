// 배열을 설정한 후 숫자를 추가하거나 제거할때마다 새롭게 배열을 오름차순으로 계속 정렬하는 프로그램
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
// 배열을 오름차순으로 정렬하는 함수
void selection_sort(int arr[], int length) { 
	int pass, current, temp;   
	for (pass = 1; pass < length; pass++) { 
		for (current = 0; current < (length - pass); current++) { 
			if (arr[current] > arr[current + 1]) { 
				temp = arr[current];			           
				arr[current] = arr[current + 1];	            
				arr[current + 1] = temp; 
			} 
		} 
	} 
}
int main() {
	int arr[MAX];
	int i, j, k, l, num;
	int count = 0, check;
	char trash, type;
	printf("Enter input numbers.\n");
	for (i = 0; i < MAX; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == -1) {
			break;
		}
		count++;
	}
	while (1) {
		printf("Enter operation.\n");
		scanf("%c", &trash);
		scanf("%c", &type);
		// i를 입력받을 경우 배열에 숫자를 추가한다.
		if (type == 'i') {
			scanf("%d", &num);
			arr[count] = num;
			for (check = 0; check < count; check++) {
				// 배열에 같은 숫자가 있을 경우 입력받지 않는다.
				if (arr[check] == num) {
					arr[count] = NULL;
					count--;
				}
			}
			count++;
			selection_sort(arr, count);
			for (j = 0; j < count; j++) {
				printf("%d ", arr[j]);
			}
			printf("\n");
		}
		// d를 입력받을 경우 배열에서 숫자를 제거한다.
		else if (type == 'd') {
			scanf("%d", &num);
			for (k = 0; k < MAX; k++) {
				if (arr[k] == num) {
					for (l = k; l < MAX; l++) {
						arr[l] = arr[l + 1];
					}
					count--;
				}
			}
			selection_sort(arr, count);
			for (j = 0; j < count; j++) {
				printf("%d ", arr[j]);
			}
			printf("\n");
		}
		// q를 입력받을 경우 프로그램을 종료한다.
		else if (type == 'q') {
			break;
		}
	}
	return 0;
}