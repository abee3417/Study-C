/*a�� b���� ����ϴ� ���α׷�*/
#include <stdio.h>
int power(int a, int b) { // a�� b���� ������ִ� ����Լ�
	if (b == 0) {
		return 1;
	}
	else {
		return(a * power(a, b - 1));
	}
}

int main() {  // a���� b���� �Է¹ް� power�Լ��� �ҷ��� ��� ���.
	int x, y;
	printf("Put the number.\n");
	scanf("%d", &x);
	printf("How many times do you want to multiply?\n");
	scanf("%d", &y);
	printf("The squqre of %d is %d.", x, power(x, y));
	return 0;
}