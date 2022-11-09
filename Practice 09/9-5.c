// �迭�� ������ �� ���ڸ� �߰��ϰų� �����Ҷ����� ���Ӱ� �迭�� ������������ ��� �����ϴ� ���α׷�
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
// �迭�� ������������ �����ϴ� �Լ�
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
		// i�� �Է¹��� ��� �迭�� ���ڸ� �߰��Ѵ�.
		if (type == 'i') {
			scanf("%d", &num);
			arr[count] = num;
			for (check = 0; check < count; check++) {
				// �迭�� ���� ���ڰ� ���� ��� �Է¹��� �ʴ´�.
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
		// d�� �Է¹��� ��� �迭���� ���ڸ� �����Ѵ�.
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
		// q�� �Է¹��� ��� ���α׷��� �����Ѵ�.
		else if (type == 'q') {
			break;
		}
	}
	return 0;
}