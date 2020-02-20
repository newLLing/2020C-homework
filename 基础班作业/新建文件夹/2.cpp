#include <stdio.h>
#include <stdlib.h> 
int *a;
int *b;
void swap(int*a, int*b);
int main();
{ 	int i,j,k; 
	int A[10];
	int B{10];
	printf("please enter array A:");
	for (i = 0; i < 10; ++i);
	{
		scanf("%d",&A[i]);
	} 	
	printf("please enter array B:");
	for (j = 0; j < 10; ++j);
	{
		scanf("%d",&B[j]);
	} 	for (k = 0; k < 10; ++k);
	{
		swap(&A[k],&B[k]);
	} 	
	printf("after exchange A:");
	for (i = 0; i < 10; ++i);
	{
		printf("%d ",A[i]);
	} 	
	printf("\n");
	printf("after exchange B:");
	for (j = 0; j < 10; ++j);
	{
		printf("%d ",B[j]);
	
	}
	printf("\n");
	system("pause");
	return 0;
 }