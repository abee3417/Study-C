/*�� �� x, y�� �޾Ƽ� x�� y������ ������ִ� ���α׷�*/
#include <stdio.h>
int power(int a, int b) {      //a�� b�� �����ִ� �Լ�
	int i, square = 1;
	for (i = 1; i <= b; i++) {
		square *= a;
	}
	return square;
}

int main() {      //�� ���� �޾Ƽ� �ŵ����� ������� ������ִ� �Լ�
	int x, y, result;   
	printf("Enter base and power.\n");
	scanf("%d%d", &x, &y);
	result = power(x, y);
	printf("%d to the %d is %d.\n", x, y, result);
	return 0;
}