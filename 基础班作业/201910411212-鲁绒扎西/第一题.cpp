#include<stdio.h>
#define M 3
#define N 3

void fun(int tt[M][N], int pp[N]);

int main()
{
	int tt[M][N], int pp[N];
	printf("Please input the numbers:");

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf_s("%d", &tt[i][j]);
		}
	}
	fun(tt, pp);
	printf("The result is:\n");

	for (int i = 0; i < N; i++)
		printf("%d ", pp[i]);
	return 0;
}

void fun(int tt[M][N], int pp[N])
{
	int i, j, h;

	for (i = 0; i < N; i++)
	{
		h = tt[0][i];
		for (j = 0; j < M; j++)
		{
			if (tt[j][i] < h)
				h = tt[j][i];
		}
		pp[i] = h;
	}
}