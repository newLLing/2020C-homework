#include<stdio.h>
void change(int a[])
{
	int min=a[0], max=a[9],temp,n,m;
	int *p = a;
	int *q = a + 9;
	for (int i = 1; i < 10; i++)
	{
		if (*(p + i) < min)
		{
			min = *(p + i);
			n = i;
		}
	}
	temp = *p;
	*p = *(p + n);
	*(p + n) = temp;
	for (int j = 1; j<10; j++)
	{
		if (*(q - j) > max)
		{
			max = *(q - j);
			m = j;
		}
	}
	temp = *q;
	*q = *(q - m);
	*(q - m) = temp;

}
int main()
{
	int a[10] = { 35,20,94,-23,39,-56,100,87,49,12 };
	change(a);
	for (int i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	getchar();
	return 0;
}