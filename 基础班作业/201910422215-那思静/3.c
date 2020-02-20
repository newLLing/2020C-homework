#include<stdio.h>
int main()
{
	int m, i, *j, *a[10];
	int *a[10] = { 35,20,94,-23,39,-56,100,87,49,12 };
	for (m = 1, i = 0; m < 10; m++)
	{
		if (*a[m] < *a[i])
			i = m;
	}
	*j = *a[i];
	*a[i] = *a[0];
	*a[0] = *j;
	for (m = 1; i = 0; m < 10; m++)
	{
		if (*a[m] > *a[i])
			i = m;
	}
	*j = *a[i];
	*a[i] = *a[9];
	*a[9] = *j;
	for (m = 0; m < n; m++)
		printf("%d", *a[m]);
	printf("\n");
	return 0;
}