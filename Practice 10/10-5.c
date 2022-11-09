/*
10 - 5. a, b, c �� ���� ���� �迭�� �����϶�.
���� ����ڷκ��� a, b �迭�� ũ�⿡ ���� ���� �迭�� �����.
a, b �迭�� ũ��� �ٸ� �� ������ c �迭�� ũ��� a, b �迭 ũ�⸦ ���� ũ���� �Ѵ�.
�Է¹��� ���ڷ� a, b �迭�� ������ ä��� �����϶�.
���� a, b �迭�� �պ�(Merge)�Ͽ� c �迭�� �����ϵ� ���ĵ� ������ �����϶�.
���� a, b, c �迭 ������ ����ϴ� ���α׷��� �ۼ��϶�.
��, �ݵ�� ������ ��������� ��� �Ѵ�. 
(��Ʈ: p�� a �迭��, q�� b �迭�� ����ų ��� 
�� �迭�� �պ��Ϸ��� �ϴ� *p�� *q�� ���Ѵ�.
���� *p�� *q���� ������ *p�� c �迭�� �� ��, p�� �� ���� ���� ����Ű�� �Ѵ�.
���� �ٽ� *p�� *q�� ���Ѵ�.
�� ������ �ݺ��ϵ� � ���� c �迭�� �Ű� �� ���� �����Ͱ� �� �������� �����Ѵ�.
p�� q�� �ϳ��� �迭 ���� �ٴٸ���, �ٸ� �迭�� �����ִ� ���� ��� ���������� c �迭�� �Ű� ���´�.
�̹� ���ĵ� �迭�̱� �����̴�.)
> Enter number of elements of array a.
> 3(Enter)
> Enter integers to insert to a.
> 5 1 3(Enter)
> Enter number of elements of array b.
> 7(Enter)
> Enter integers to insert to b.
> 12 4 2 7 9 16 10(Enter)
> array a is 1 3 5.
array b is 2 4 7 9 10 12 16.
array c is 1 2 3 4 5 7 9 10 12 16.
*/
#include <stdio.h>
#include <stdlib.h>
void merge(int *p, int *q, int *c, int size) {
	int i;
	for (i = 0; i <= size; i++) {
		if (*p < *q) {
			*c = *p;
			*c++;
			*p++;
		}
		else {
			*c = *q;
			*c++;
			*q++;
		}
	}
	
}
int main() {
	int *arr_a = 0, *arr_b = 0, *arr_c = 0;
	int i, j, k, l, size1, size2;
	printf("Enter number of elements of array a.\n");
	scanf("%d", &size1);
	arr_a = (int*)malloc(size1, sizeof(int));
	printf("Enter integers to insert to a.\n");
	for (i = 0; i < size1; i++) {
		scanf("%d", arr_a + i);
	}
	printf("Enter number of elements of array b.\n");
	scanf("%d", &size2);
	arr_b = (int*)malloc(size2, sizeof(int));
	printf("Enter integers to insert to b.\n");
	for (j = 0; j < size2; j++) {
		scanf("%d", arr_b + i);
	}
	arr_c = (int*)malloc((size1 + size2), sizeof(int));
	merge(arr_a, arr_b, arr_c, (size1 + size2));
	printf("array c is ");
	for (l = 0; l < size1 + size2; l++) {
		printf("%d ", arr_c);
	}
	return 0;
}