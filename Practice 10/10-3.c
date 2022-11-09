/*��� �� ���� �Է� �޾� ���� �迭�� ���� ��, 
�迭 �����͸� �Է¹޾� ������ ��Ҹ� ������ ���� ����ϴ� ���α׷�*/
#include <stdio.h>
#include <stdlib.h>
int** create_matrix(int, int);
void destroy_matrix(int**, int);
// ��� ��, �׸��� ������ ���ڵ��� �Է¹ް� ����� ����ϴ� �Լ�.
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
// main���� ���� ��� �� ������ ĭ ���� ����.
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
// ���� ĭ�� �ٽ� ������.
void destroy_matrix(int** p, int row){ 
	int i;  
	for (i = 0; i < row; i++)	
		free(p[i]);		
	free(p);			
	p = NULL; 
}