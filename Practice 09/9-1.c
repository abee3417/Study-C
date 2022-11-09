/*로또 프로그램*/
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
// 금액을 입력받은만큼 로또의 번호들을 출력 (1000원당 번호 1줄씩, 번호 1줄에 번호 6개)
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
// 똑같은 번호가 있는지 없는지 확인
int is_duplicate(const int *arr, int length, int n) {
	int i;
	for (i = 0; i < length; i++) {
		if (arr[i] == n) {
			return 1;
		}
	}
	return 0;
}
// 랜덤으로 번호를 뽑는 함수
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
// 스왑 함수
void swap(int *p, int *q) {
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
// 뽑은 숫자들을 오름차순으로 정렬
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
// 정렬 완료한 숫자들을 출력
void print_array(const int *arr, int length) { 
	int i;  
	for (i = 0; i < length; i++)		
		printf("%d ", arr[i]); 
	printf("\n"); 
}