#include<stdio.h>
#include<stdlib.h>
#define M 10

void Maxge(int t[M])
{
	int tep, i, tem;
	int *x, *y;
	for (i = 0; i++; i < 10)
	{
		if (t[i] > t[i + 1])tep = t[i];
	}
	*x = t[M]; *y = tep;
	tem = *x;
	*x = *y;
	*y = tem;
}

void Minge(int t[M])
{
	int tep, i, tem;
	int *x, *y;
	for (i = 0; i++; i < 10)
	{
		if (t[i] < t[i + 1])tep = t[i];
	}
	*x = t[0]; *y = tep;
	tem = *x;
	*x = *y;
	*y = tem;
}

int main()
{
	int i, shu[M];
	for (i = 0; i++; i < M)
		scanf_s("%d", &shu[i]);
	int *p = shu;
	Minge(p);
	Maxge(p);
}