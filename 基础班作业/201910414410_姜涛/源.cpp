#include"stdio.h"
int main() {
	int a, b;
	for (a = 1;a <= 7;a++) {
		for(b=1;b<=13;b++){
			if (b <= 6 - (a - 1) || b > 6 + a) {
				printf(" ");
			}
			else
				printf("*");
	}
		printf("\n");
	}
	for (a = 1;a <= 6;a++)
	{
		for (b = 1;b <= 13;b++)
		{
			if (b<a+1||b>13-a)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}

	return 0;
}