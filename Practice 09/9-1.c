/*�ζ� ���α׷�*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define MAX 6
void print_array(int*, int); 	
void swap(int*, int*);		
void bubble_sort(int[ ], int);
int is_duplicate(const int*, int, int);
void set_numbers(int*);
// �ݾ��� �Է¹�����ŭ �ζ��� ��ȣ���� ��� (1000���� ��ȣ 1�پ�, ��ȣ 1�ٿ� ��ȣ 6��)
int main(void){  
	int money, i, lotto[MAX] = { 0 };
	while (1){    
		printf("Enter available money.\n");     
		scanf("%d", &money);    
		if (money == 0) {
			break;
		}
		printf("Possible sets of lottery numbers are,\n");  
		for (i = 1; i <= (money / 1000); i++){    
			set_numbers(lotto);    
			bubble_sort(lotto, MAX);		
			print_array(lotto, MAX);
			Sleep(1000);
		}
	}
	return 0;
}
// �Ȱ��� ��ȣ�� �ִ��� ������ Ȯ��
int is_duplicate(const int *arr, int length, int n) {
	int i;
	for (i = 0; i < length; i++) {
		if (arr[i] == n) {
			return 1;
		}
	}
	return 0;
}
// �������� ��ȣ�� �̴� �Լ�
void set_numbers(int *lotto) {
	int i, num;
	srand(time(NULL));
	for (i = 0; i < MAX; i++) {
		num = 1 + (rand() % 45);
		if (is_duplicate(lotto, i, num) == 0) {
			lotto[i] = num;
		}
	}
}
// ���� �Լ�
void swap(int *p, int *q) {
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
// ���� ���ڵ��� ������������ ����
void bubble_sort(int arr[ ], int length) {
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
// ���� �Ϸ��� ���ڵ��� ���
void print_array(const int *arr, int length) { 
	int i;  
	for (i = 0; i < length; i++)		
		printf("%d ", arr[i]); 
	printf("\n"); 
}