#include<stdio.h>

int main()
{

	int a[10]; int i;
	printf("请输入10个数字:");
	for (i = 0; i < 10; i++)
		scanf_s("%d,", &a[i]);
	int* p = a;

	int tmp;
	for (i = 0; i < 10; i++)
	{
		if (*p > a[9])
		{
			tmp = a[9];
			a[9] = *p;
			*p = tmp;

		}
		p++;
	}
	p = a;
	for (i = 0; i < 10; i++)
	{
		if (*p < a[0])
		{
			tmp = a[0];
			a[0] = *p;
			*p = tmp;
		}
		p++;
	}
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);

}