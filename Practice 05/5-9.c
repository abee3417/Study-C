/*���� �ﰢ���� �� �� �ִ� �ڿ��� a, b, c�� ��� �����ϴ� ���α׷�*/
#include <stdio.h>
int main() {
	int num, a, b, c;
	printf("Enter the maximum length N.\n");
	scanf("%d", &num);
	printf("The right-angled triangles are,\n");
	for (a = 1; a <= num; a++) {      //�Է¹��� ���ں��� ���� ���� �� �����ﰢ���� �� �� �ִ� �ڿ����� ã��
		for (b = 1; b <= num; b++) {
			for (c = 1; c <= num; c++) {
				if (a * a + b * b == c * c) {
					printf("%d, %d, %d\n", a, b, c);      //ã�������� �ش� �ڿ����� ���
				}
			}
		}
	}
	return 0;
}