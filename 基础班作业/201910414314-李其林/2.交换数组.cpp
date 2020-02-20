#include<stdio.h>
#define N 5
#define M 4
void swap(int a[],int b[])
{
	int temp,n;
	if (N <= M)
		n = N;
	else
		n = M;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
int main()
{
	int i;
	int a[N] = { 1,2,3,4,5 };
	int b[M] = { 6,7,8,9 };
	swap(a, b);
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");
	for (i = 0; i < M; i++)
		printf("%d ",b[i]);
	getchar();
	getchar();
	return 0;
}