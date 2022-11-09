/*행과 열 수를 입력 받아 동적 배열을 만든 후, 
배열 데이터를 입력받아 각각의 요소를 제곱한 값을 출력하는 프로그램*/
#include <stdio.h>
#include <stdlib.h>
int** create_matrix(int, int);
void destroy_matrix(int**, int);
// 행과 열, 그리고 제곱할 숫자들을 입력받고 결과를 출력하는 함수.
int main( ){  
	int row, column, i, j, **matrix;  
	printf("Enter row and column.\n"); 
	scanf("%d%d", &row, &column);
	matrix = create_matrix(row, column);
	printf("Enter the value of array elements.\n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	for (i = 0; i < row; i++){
		for (j = 0; j < column; j++) {
			matrix[i][j] *= matrix[i][j];
		}
	}
	printf("The result is\n");
	for (i = 0; i < row; i++){  
		for (j = 0; j < column; j++)      
			printf("%d ", matrix[i][j]);   
		printf("\n");  
	}
	destroy_matrix(matrix, row);
	return 0;
}
// main에서 받은 행과 열 값으로 칸 수를 만듬.
int** create_matrix(int row, int col){ 
	int i, **p;   
	p = (int**)malloc(row * sizeof(int*));	 
	if (p == NULL) {
		exit(1);
	}
	for (i = 0; i < row; i++) { 
		p[i] = (int*)malloc(col * sizeof(int));	
		if (p[i] == NULL) {
			exit(1);
		}
	}  
	return p;
}
// 만든 칸을 다시 정리함.
void destroy_matrix(int** p, int row){ 
	int i;  
	for (i = 0; i < row; i++)	
		free(p[i]);		
	free(p);			
	p = NULL; 
}