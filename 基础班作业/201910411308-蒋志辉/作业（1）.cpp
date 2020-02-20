#include < stdio.h >
#define M 3
#define N 4
void fun(int tt[M][N], int pp[N])
{
	int i, j, min;
	for (i = 0; i < N; i++)
	{
		min = tt[0][i];
		for (j = 0; j < M; j++)
			if (min > tt[j][i])
				min = tt[j][i];
		pp[i] = min;
	}
}
int  main()
{
	int t[M][N] = { {22,45,56,30},{19,33,45,38},{20,22,66,40} };
	int p[N], i, j, k;
	printf("The original data is:\n");
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++)
			printf("%6d", t[i][j]);
		printf("\n");
	}
	fun(t, p);
	printf("\nThe result is:\n");
	for (k = 0; k < N; k++) printf("%4d", p[k]);
	printf("\n");
}












