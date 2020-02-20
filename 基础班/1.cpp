#include<stdio.h>
void swap(int *a, int *b)
{
	int iTeam=*a;
	*a = *b;
	*b = iTeam;
}

int main()
{
	int a[5] = { 23,45,67,89,23 };
	int b[5] = { 34,65,81,21,43 };
	int i;
	int*p,*q;
	for (i = 0; i < 5; i += 1)
	{
		p = &a[i], q =& b[i];
		swap(p,q);
	}
	printf("a数组是：");
	for (i = 0; i < 5; i += 1)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
	printf("b的数组是：");
	for (i = 0; i < 5; i += 1)
	{
		printf("%5d",b[i]);
	}
	return 0;
    
}
