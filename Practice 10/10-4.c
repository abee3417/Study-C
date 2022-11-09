#include <stdio.h>
#include <stdlib.h>
void swap(char p[0], p[1]) {

}
int main() {
	char* name = NULL, ch;
	int i, j;
	printf("이름 : ");
	for (i = 0; ;i++) {
		scanf("%c", &ch);
		if (ch == '\n') {
			break;
		}
	}
	name = (char*)malloc(i * sizeof(char));
	printf("이름 한번 더 : ");
	for (j = 0; j < i; j++) {
		scanf("%c", name + j);
	}
	for (j = 0; j < i; j++) {
		printf("%c", *(name + j));
	}
	printf(" 님, 안녕하세요?\n");
	free(name);
	return 0;
}
//char **p = (char**)malloc(2 * sizeof(char*))
/*

int main() {
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
	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			matrix[i][j] *= matrix[i][j];
		}
	}
	printf("The result is\n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}
	destroy_matrix(matrix, row);
	return 0;
}

int** create_matrix(int row, int col) {
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

void destroy_matrix(int** p, int row) {
	int i;
	for (i = 0; i < row; i++)
		free(p[i]);
	free(p);
	p = NULL;
}
*/