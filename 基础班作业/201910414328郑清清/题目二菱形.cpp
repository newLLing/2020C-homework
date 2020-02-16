#include <stdio.h>
int main()
{
	int a, b, c,  i, j, k;
	int n = 7;
	
	for (a = 1; a <= n; a++) {
		for (b = 0; b < n - a; b++) {
			printf(" ");
		}
		for (c = 1; c <= 2 * a - 1; c++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;

}
