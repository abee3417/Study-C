/*입력받은 숫자들의 합을 출력.*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv) {
	int i, sum = 0;
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("The result is %d.\n", sum);
}