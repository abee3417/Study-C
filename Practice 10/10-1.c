#include <stdio.h>
#include <string.h>
int main() {
	int i;
    char *str = 0;
	printf("Put the sentence.\n");
	scanf("%s", str);
	for (i = strlen(str) - 1; i >= 0; ) {
		if ((str[i] >= 0) && (str[i] <= 127)) { 
			printf("%c", str[i]);      
			i--; 
		}
		else {
			printf("%c", str[i - 1]); 
			printf("%c", str[i]);   
			i -= 2;
		} 
	}
	return 0;
}