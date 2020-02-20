#include <stdio.h>
#include <stdlib.h>

int main() {
	int line;  
	int column; 
	int i;  
	int j; 

	printf("请输入菱形的行数(奇数)：");
	scanf_s("%d", &line);
	if (line % 2 == 0) {  
		printf("必须输入奇数！\n");
		exit(1);
	}
	column = line;  

	for (i = 1; i <= line; i++) { 
		if (i < (line + 1) / 2 + 1) { 
			for (j = 1; j <= column; j++) {  
				if ((column + 1) / 2 - (i - 1) <= j && j <= (column + 1) / 2 + (i - 1)) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		else {  
			for (j = 1; j <= column; j++) {
				if ((column + 1) / 2 - (line - i) <= j && j <= (column + 1) / 2 + (line - i)) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}

	return 0;
}