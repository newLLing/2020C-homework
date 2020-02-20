#include"stdio.h"
void swap(int A[3], int B[3])
{
	int C[3];
	for (int a= 0;a < 3;a++)
	{
		C[a] = A[a];
	}
	for (int a = 0;a < 3;a++)
	{
		A[a] = B[a];
	}
	for (int a = 0;a < 3;a++)
	{
		B[a] = C[a];
	}
}
int main()
{
	int A[3] = { 1,2,3 };
	int B[3] = { 4,5,6 };
	swap(A, B);
	printf("交换后的A:");
	for (int a = 0;a < 3;a++)
	{
		printf("%d ", A[a]);
		if (a == 2)
		{
			printf("\n");
		}
	}
	printf("交换后的B:");
	for (int b = 0;b < 3;b++)
	{
		printf("%d ", B[b]);
		if (b == 2)
		{
			printf("\n");
		}
	}
	return 0;
}