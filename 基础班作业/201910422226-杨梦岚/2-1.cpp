#include<stdio.h>
#define M 4
#define N 5
void fun(int tt[M][N], int pp[N])
{
	int min;
	for (int i = 0; i < N; i++)
	{
		min = tt[0][i];
		for (int j = 0; j < M; j++)
		{
			if (min > tt[j][i])
				min = tt[j][i];
		}
		pp[i] = min;
	}
	return;
}
int main()
{
	int tt[M][N] = { {1,3,5,2,9},{4,6,8,12,3},{5,2,4,7,5},{11,10,6,3,1} };
	int pp[N];
	fun(tt, pp);
	for (int k = 0; k < N; k++)
	{
		printf("%d ", pp[k]);
	}
	return 0;
}