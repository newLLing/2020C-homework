#include<stdio.h>
void swap(int* a, int* b, int n) {

	int i, temp;

	for (i = 0; i < n; i++) {

		temp = a[i];
		a[i] = b[i];
		b[i] = temp;

	}

}

int main()

{

	int x[5] = { 1,2,3,4,5 };

	int y[5] = { 6,7,8,9,10 };

	int i, n = 5;

	swap(x, y, n);

	printf("\n X: ");

	for (i = 0; i < n; i++)
	{
		printf("%d ", x[i]);
	}

	printf("\n Y: ");

	for (i = 0; i < n; i++)
	{
		printf("%d ", y[i]);
	}


}