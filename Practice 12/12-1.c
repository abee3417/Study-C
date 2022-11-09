/*Example 13-26의 소스코드를 마저 완성하여 실행시키기*/
#define FRIENDS 4
#define MAX 11	
#include <stdio.h>
#include <string.h>
// 스왑 함수.
void swap(char *p, char *q){	
	char temp[MAX];  
	strcpy(temp, p); 
	strcpy(p, q); 
	strcpy(q, temp);
}
// 버블 정렬 함수. (오름차순으로 정렬)
void bubble_sort(char arr[FRIENDS][MAX]){	
	int pass, current;  
	for (pass = 1; (pass < FRIENDS); pass++){		
		for (current = 0; current < (FRIENDS - pass); current++){
			if (strcmp(arr[current], arr[current + 1]) > 0)	   
				swap(arr[current], arr[current + 1]);	  
		}
	}
}
// 출력 함수.
void print_array(char arr[FRIENDS][MAX]){	
	int i;   
	for (i = 0; i < FRIENDS; i++)	
		printf("%s ", arr[i]);	
	printf("\n");
}
// 값을 입력받는 메인함수.
int main( ){
	int i;
	char name[MAX];
	char list[FRIENDS][MAX];	
	for (i = 0; i < FRIENDS; i++){		
		printf("Enter the name of your friend.\n");  
		gets(name);				   
		strcpy(list[i], name);
	}  
	bubble_sort(list);
	print_array(list);  
	return 0;	
}