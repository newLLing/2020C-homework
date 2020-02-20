#include"stdlib.h"
#include"stdio.h" 
void swap(int*, int*);
int main()
{
	int a[10], b[10], i;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < 10; i++)
		scanf_s("%d", &b[i]);
	for(i=0;i<10;i++)
		swap(&a[i],&b[i]);
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	for (i = 0; i < 10; i++)
		printf("%d ", b[i]);
	system("pause");
	return 0;
}
void swap(int* a, int* b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}