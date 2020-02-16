#include<stdio.h>
int main()
{
	int n, b, a = 0;
	printf("input a JiShu��");
	scanf_s("%d", &n);
	b = n;
	for (int i = 0; i < n - n / 2; i++)
	{
		a++; b--;
		for (int j = i; j < n / 2; j++)
		{
			printf(" ");
		}
		for (int m = 0; m < 2 * a - 1; m++)
		{
			printf("*");
		}
		printf("\n");
	}//����������
	for (int i = 0; i < n - a; i++)
	{
		for (int j = 0; j <= i; j++)
			printf(" ");
		for (int m = 0; m < 2 * b - 1; m++)
			printf("*");
		printf("\n");
		b--;
	}//����������
	return 0;
}
