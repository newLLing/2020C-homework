#include <stdio.h>
#define N 4
void swap(int *a, int* b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	return;
}
int  main()
{
	int a[N] ;
	int b[N] ;
	printf("交换前:\n");
	printf("a[N]=");
	for (int k = 0; k < N; k++)
		scanf_s("%d", &a[k]);
	printf("b[N]=");
	for (int k = 0; k < N; k++)
		scanf_s("%d", &b[k]);
	printf("交换后:\n");
	for (int i = 0; i < N; i++)
	{
		swap(&a[i], &b[i]);
	}
	printf("a[N]=");
	for (int k = 0; k < N; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n");
	printf("b[N]=");
	for (int k = 0; k < N; k++)
	{
		printf("%d ", b[k]);
	}
	return 0;	
}