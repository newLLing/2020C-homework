#include"stdio.h"
void one(int A[3][3], int B[3]) {
	int min;
	for (int b = 0;b < 3;b++)
	{
		for (int a = 0;a <= 2;a++) 
		{
		
				if (A[a + 1][b] <= A[a][b])
				{
					min = A[a + 1][b];
				}
				else
					min = A[a][b];
		}
		B[b] = min;
	}
	for (int a = 0;a < 3;a++)
	{
		printf("%d", B[a]);
	}
}
int main()
{
	int A[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int B[3];
	one(A, B);
	
	return 0;
}