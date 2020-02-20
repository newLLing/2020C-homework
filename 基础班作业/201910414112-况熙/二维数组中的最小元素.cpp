#include <stdio.h>
#define M 5
#define N 2
void fun(int **);

int main()
{
	int i;
	int tt[M][N] = { {13,2},{3,4},{5,6},{7,8},{9,10} }; 
	int* p[M];
	for (i = 0; i < M; i++)
		p[i] = tt[i];
	fun(p);
	return 0;
}

void fun(int **p)
{
	int i;
	int a[M];
	for ( i = 0; i < M; i++)
	{
		int* q = p[i];
		int max = *q;
		a[i] = max;
		for(int j=0;j<N;j++)
		{
			if (*q > max)
			{
				max = *q;
				a[i] = max;
			}
			else
				q++;
		}
	}
	for (i = 0; i < M; i++)
		printf("%d,", a[i]);

}