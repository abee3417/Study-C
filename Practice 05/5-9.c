/*직각 삼각형이 될 수 있는 자연수 a, b, c를 모두 나열하는 프로그램*/
#include <stdio.h>
int main() {
	int num, a, b, c;
	printf("Enter the maximum length N.\n");
	scanf("%d", &num);
	printf("The right-angled triangles are,\n");
	for (a = 1; a <= num; a++) {      //입력받은 숫자보다 작은 값들 중 직각삼각형이 될 수 있는 자연수를 찾음
		for (b = 1; b <= num; b++) {
			for (c = 1; c <= num; c++) {
				if (a * a + b * b == c * c) {
					printf("%d, %d, %d\n", a, b, c);      //찾을때마다 해당 자연수를 출력
				}
			}
		}
	}
	return 0;
}