/*Example 13-26�� �ҽ��ڵ带 ���� �ϼ��Ͽ� �����Ű��*/
#define FRIENDS 4
#define MAX 11	
#include <stdio.h>
#include <string.h>
// ���� �Լ�.
void swap(char *p, char *q){	
	char temp[MAX];  
	strcpy(temp, p); 
	strcpy(p, q); 
	strcpy(q, temp);
}
// ���� ���� �Լ�. (������������ ����)
void bubble_sort(char arr[FRIENDS][MAX]){	
	int pass, current;  
	for (pass = 1; (pass < FRIENDS); pass++){		
		for (current = 0; current < (FRIENDS - pass); current++){
			if (strcmp(arr[current], arr[current + 1]) > 0)	   
				swap(arr[current], arr[current + 1]);	  
		}
	}
}
// ��� �Լ�.
void print_array(char arr[FRIENDS][MAX]){	
	int i;   
	for (i = 0; i < FRIENDS; i++)	
		printf("%s ", arr[i]);	
	printf("\n");
}
// ���� �Է¹޴� �����Լ�.
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