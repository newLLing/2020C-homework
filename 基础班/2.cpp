#include<stdio.h>
void swap(int *a, int *b)
{
	int iTeam=*a;
	*a = *b;
	*b = iTeam;
}
int main()
{
	int i;
	int a[10];
	printf("请输入10个数组值：");
	for (i = 0; i < 10; i += 1) 
	{
		scanf_s("%d",&a[i]);
	}
	int max = a[0];
	for (i = 0; i < 10; i += 1)
	{
		if(max<a[i])
		max = a[i];
	}
	int*p = &max, *q = &a[9];
	swap(p,q);
	int min = a[0];
	for (i = 0; i < 10; i += 1)
	{
		if (min > a[i])
			min = a[i];
	}
	int *h = &min, *l = &a[0];
	swap(h, l);
	printf("最大数变为a[9]:%d\n",a[9]);
	printf("最小数变为a[0]:%d",a[0]);
}