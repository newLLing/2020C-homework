#include<stdio.h>
#include<stdlib.h>


void swap(int *x, int *y)
{
	int tem;
	tem = *x;
	*x = *y;
	*y = tem;
}

int main()
{
	int a = 20, b = 10;
	swap(&a, &b);
	printf("%d,%d", a, b);
	system("pause");
}