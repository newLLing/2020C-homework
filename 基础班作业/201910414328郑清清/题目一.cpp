//功能：请编一个函数void fun(int tt[M][N],int pp[N])，
//tt指向一个M行N列的二维数组，求出二维数组每列
//中最小元素，并依次放入pp所指一维数组中。二维
//数组中的数已在主函数中赋予。

#include <stdio.h>
#define M 3
#define N 3
void fun(int[M][N], int[N]);
int main()
{
	int  i,j;
	int tt[M][N];
	int pp[N];
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%d", &tt[i][j]);
		}
	}
	fun(tt, pp);
	for (i = 0; i < N; i++) {
		printf("%d ",pp[i]);
	}
	return 0;
	

}
void fun(int tt[M][N], int pp[N])
{
	int a, b,min;
	for (a = 0; a < N; a++) {
		min = tt[a][0];
		for (b = 0; b < M; b++) {
			
			if (tt[a][b] < min) {
				min = tt[a][b];
			}
			
		}
		pp[a] = min;
	}
}