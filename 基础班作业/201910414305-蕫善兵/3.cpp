#include"stdio.h"
#include"stdlib.h"
void maxmin(int*);
int main()
{
	int i,a[10];
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	maxmin(a);
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	system("pause");
	return 0;
}
void maxmin(int a[10])
{
	int t,index=0,i,max=a[9],min=a[0];
	for (i = 1; i < 10; i++)
		if (min> a[i])
		{
			min = a[i];
			index = i;
		}
	t=a[0];
	a[0] = min;
	a[index] = t;
	for (index=9,i = 8; i >= 0; i--)
		if (max < a[i])
		{
			max = a[i];
			index = i;
		}
	t = a[9];
	a[9] = max;
	a[index] = t;
}