#include <stdio.h>
int main() {
	double Ű;
	double ������;
	double feet;
	double lb;
	double ǥ��ü��;
	double ����;

	printf("Ű(cm)�� �Է��ϼ���.");
	scanf("%lf", &Ű);
	printf("������(kg)�� �Է��ϼ���.");
	scanf("%lf", &������);

	feet = Ű / 30.48;
	lb = ������ * 2.20459;
	ǥ��ü�� = (Ű - 100.0) * 0.9;
	���� = ������ - ǥ��ü��;

	printf("\n");
	printf("����� Ű�� %.1lfcm (%.1lffeet) �Դϴ�.\n", Ű, feet);
	printf("����� ü���� %.1lfkg (%.1lflb) �Դϴ�.\n", ������, lb);
	printf("ǥ�� ü�� %.1lf���� ���̴� %+.1lfkg �Դϴ�.\n", ǥ��ü��, ����);

	return 0;
}