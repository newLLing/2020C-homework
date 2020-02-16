#include"stdlib.h"
#include"stdio.h"
int main()
{
	int i,j;
	for (i = 0; i < 7; i++)
	{
		for (j = 1; j < 14; j++)
		{
			if (j < 7 - i || j>7 + i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	for (i = 5; i >=0; i--)
	{
		for (j = 1; j < 14; j++)
		{
			if (j < 7 - i || j>7 + i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}