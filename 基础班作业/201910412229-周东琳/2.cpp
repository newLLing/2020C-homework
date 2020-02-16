#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 1; i <= 7; i += 1)
	{
		for (j = 1; j <= 7 - i; j += 1)
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k += 1)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i < 7; i += 1)
	{
		for (j = 1; j <= i; j += 1)
		{
			printf(" ");
		}
		for (k = 1; k <= 13 - 2 * i; k += 1)
		{
			printf("*");
		}
		printf("\n");

	}
}
