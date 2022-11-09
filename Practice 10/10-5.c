/*
10 - 5. a, b, c 세 개의 동적 배열을 선언하라.
이후 사용자로부터 a, b 배열의 크기에 따라 동적 배열을 만들라.
a, b 배열의 크기는 다를 수 있으나 c 배열의 크기는 a, b 배열 크기를 합한 크기라야 한다.
입력받은 숫자로 a, b 배열을 각각을 채우고 정렬하라.
이후 a, b 배열을 합병(Merge)하여 c 배열에 저장하되 정렬된 순서로 저장하라.
이후 a, b, c 배열 내용을 출력하는 프로그램을 작성하라.
단, 반드시 포인터 산술연산을 써야 한다. 
(힌트: p가 a 배열을, q가 b 배열을 가리킬 경우 
두 배열을 합병하려면 일단 *p와 *q를 비교한다.
만약 *p가 *q보다 작으면 *p를 c 배열에 쓴 후, p가 그 다음 것을 가리키게 한다.
이후 다시 *p와 *q를 비교한다.
이 과정을 반복하되 어떤 경우든 c 배열로 옮겨 쓴 쪽의 포인터가 그 다음으로 전진한다.
p나 q중 하나가 배열 끝에 다다르면, 다른 배열에 남아있는 것을 모두 순차적으로 c 배열로 옮겨 적는다.
이미 정렬된 배열이기 때문이다.)
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