/*�ϳ��� Ÿ�� ������ Ǫ�� ���α׷�*/
//��Ģ 1�� : ��� ������ X���� Y�� �ű��.
//��Ģ 2�� : �ѹ��� �Ѱ��� �����δ�.
//��Ģ 3�� : �� �������� ���� ������ �� ū ���� ���� ������ �־���Ѵ�.

#include <stdio.h>  
void hanoi(int n, char x, char y, char z) {  // �ϳ��� Ÿ�� ������ �ذ��ϴ� �Լ�
	if (n == 1) {
		printf("Move 1 disk from %c to %c.\n", x, y);
	}
	else {
		hanoi(n - 1, x, z, y);
		printf("Move %d disk from %c to %c.\n", n, x, y);  // ��ũ ���ڰ� Ŭ���� ū �����Դϴ�.
		hanoi(n - 1, z, y, x);
	}
}
int main() {  // ������ ������ �Է¹ް� �׿� ���� ����� ����ϴ� �Լ�
	int num;
	printf("Enter the number N.\n");
	scanf("%d", &num);
	hanoi(num, 'X', 'Y', 'Z');
	return 0;
}