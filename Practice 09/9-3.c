// �־��� �迭�� ��հ��� ���� �迭��ȣ, ������ ����������� ���ϴ� ���α׷�
#include <stdio.h>
// �迭 ��ȣ�� ����� ����
int average_by_array(int p[], int n) { 
	int i, sum = 0;
	for (i = 0; i < 5; i++) {
		sum += p[i];
	}
	sum /= 5;
	return sum;
}
// ������ ����������� ����� ����
int average_by_pointer(int *p, int n) { 
	int i, sum = 0;
	for (i = 0; i < 5; i++) {
		sum += *(p + i);
	}
	sum /= 5;
	return sum;
}
// �Լ��� ȣ���Ͽ� ��հ��� �����
int main() {
	int arr[5] = { 10, 40, 50, 20, 15 };
	printf("%d\n", average_by_array(arr, 5));
	printf("%d\n", average_by_pointer(arr, 5));
	return 0;
}
