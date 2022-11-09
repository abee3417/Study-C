/*�Է¹��� ������ 3, 6, 9�� ���� !�� ������ִ� ���α׷� (369 ����)*/
#include <stdio.h>
void game(int n) {
	int number = n;
	int judgment = 0;
	int a;
	while (n>0) {       // 3, 6, 9�� �Ǵ����ִ� while��
		if ((n % 10) % 3 == 0 && (n % 10) > 0) {
			judgment++;
		}
		n /= 10;
	}
	if (judgment >= 1) {      // 3, 6, 9�� ������ �� ������ŭ !�� ���
		for (a = 1; a <= judgment; a++) {
			printf("!");
		}
	}
	else {
		printf("%d", number);
	}
	printf(" ");
}
int main() {      // 369���ӿ����� �ִ��� ����
	int num, i;
	printf("Enter a number.\n");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		game(i);
	}
	return 0;
}