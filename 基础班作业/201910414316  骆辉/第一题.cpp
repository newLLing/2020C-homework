#include<stdio.h>
#include<stdlib.h>
#define M 20//宏定义数组的大小，可修改
#define N 20

void fun(int t[M][N], int p[N])
{
	int i, j;
	for (i = 0; i++; i < M) 
	{
		for (j = 0; j++; j < N)
		{
			if (t[i][j] > t[i][j + 1])
				p[i] = t[i][j + 1];
		}
	}
}