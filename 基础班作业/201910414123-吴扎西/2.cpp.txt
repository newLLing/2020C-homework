#include <stdio.h>
#include <Windows.h>
int main()
{
	int line = 6;  //上半部分行数
	int i = 0;
	int j = 0;
	int n = 0;
	
	for (i = 0; i < line; i++)
	{
		for (n = 0; n < line - 1 - i; n++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		for (n = 0; n < i + 1; n++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}