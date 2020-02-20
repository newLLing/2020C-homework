#include<stdio.h>
#define	M 3
#define N 3
void fun(int tt[M][N], int pp[N])
{
	int i, j;
	int min;
	for (i = 0; i < N; i += 1)
	{
		min = tt[i][0];
		for (j = 0; j < M; j += 1)
		{
			if (tt[i][j] < min)
				min = tt[i][j];
		}
		pp[i] = min;
	}
	
}
int main()
{
	int i, j;
	int tt[M][N],pp[3];
	printf("请输入二位函数的对应值：");
	for (i = 0; i < 3; i += 1)
	{
		for (j = 0; j < 3; j += 1)
			scanf_s("%d",&tt[i][j]);
	}
	fun(tt,pp);
	printf("输出数列b:");
	for (i = 0; i < 3; i += 1)
	{
		printf("%5d",pp[i]);
	}
}