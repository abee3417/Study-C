/*�ڿ��� N�� �Է¹޾� ȭ�鿡 N���� * �� ����ϴ� ���α׷�*/
#include <stdio.h>
int asterisk(int n) {  // �Է¹��� ���ڸ� 1�� ��� ���鼭 0�� �ɶ����� *�� ����ϴ� ����Լ�.
	if (n == 0) {
		return 0;
	}
	else {
		asterisk(n - 1);
		printf("* ");
	}
}int main() {  // ���ڸ� �Է¹ް� asterisk �Լ��� �ҷ��� ����� �����.
	int num;
	printf("Put the number.\n");
	scanf("%d", &num);
	asterisk(num);
	return 0;
}