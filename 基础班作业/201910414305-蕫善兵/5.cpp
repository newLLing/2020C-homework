#include"stdio.h"
#include"stdlib.h"
void fun(int a[M][N], int b[N])
{
	int i, j,max;
	for (i = 0; i < N; i++)
	{
		max = a[0][i];
		for (j = 1; j < M; j++)
		{
			if (a[j][i] > max)
				max = a[j][i];
		}
		b[i] = max;
	}
}