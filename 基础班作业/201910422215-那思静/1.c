void fun(int tt[M][N], int pp[N])
{
	int i, j, min;
	for (j = 0; j< N; j++)
	{
		min = tt[0][j];
		for (i = 0; i < M; i++)
			if (tt[i][j] < min)
				min = tt[i][j];
		pp[j] = min;
	}
}