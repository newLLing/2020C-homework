#include<stdio.h>
#define M 2
#define N 3
void fun(int t[M][N], int p[N])
{
	for (int j = 0; j < N; j++)
	{
		int min = t[0][j];
		for (int i = 0; i < M; i++)
		{
			
			if (t[i][j] < t[0][j])
			{
				min = t[i][j];
			}
		}
		p[j] = min;
	}
}
int main()
{
	int t[M][N];	int p[N];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf_s("%d", &t[i][j]);
		}
	}
	fun(t, p);
	for (int i = 0; i < N; i++)
		printf("%d", p[i]);
	getchar();
	getchar();
	return 0;
}