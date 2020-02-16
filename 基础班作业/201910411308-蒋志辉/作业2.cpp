#include<stdio.h>
int main()
{
	int a, b, c;
	for (a = 1; a <= 7; a += 1)
	{
		for (b = 1; b <= 7 - a; b += 1)
		{
			printf(" ");
		}
		for (c = 1; c <= 2 * a - 1; c += 1)
		{
			printf("*");
		}
		printf("\n");
	}
	for (a = 1; a < 7; a += 1)
	{
		for (b = 1; b <= a; b += 1)
		{
			printf(" ");
		}
		for (c = 1; c <= 13 - 2 * a; c += 1)
		{
			printf("*");
		}
		printf("\n");

}
  }
