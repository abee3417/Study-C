/*������ ������ int.txt ���Ͽ� ������ ��, �װ��� �о �������� ������ out.txt ������ ����*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int input;
	long end, i;
	FILE* in = fopen("C:\\test\\int.txt", "rt");
	FILE* out = fopen("C:\\test\\out.txt", "wt");
	fseek(in, 0L, SEEK_END);
	end = ftell(in);
	for (i = 1L; i <= end; i++) {
		fseek(in, -i, SEEK_END);
		input = fgetc(in);
		fputc(input, out);
	}
	fclose(in);
	fclose(out);
	return 0;
}