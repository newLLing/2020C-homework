#include<stdio.h>
#define M 3
#define N 4
/*    请编一个函数void fun(int tt[M][N],int pp[N])，
      tt指向一个M行N列的二维数组，求出二维数组每列
      中最小元素，并依次放入pp所指一维数组中。二维
      数组中的数已在主函数中赋予。*/


void fun(int tt[M][N], int pp[N]);
int main()
{ 
	int tt[M][N], int pp[N];
	printf("Please input the numbers:");

	for (int i = 0; i < M; i++) {

		for (int j = 0; j < N; j++) {

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
	int i, j, t;

	for (i = 0; i < N; i++)
	{
		t = tt[0][i];//soul

		for (j = 0; j < M; j++)
		{
			if (tt[j][i] < t)
				t = tt[j][i];

		}
		pp[i] = t;//soul

	}
}