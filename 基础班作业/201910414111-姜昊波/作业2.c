#include <stdio.h>
int main()
{
	int n=7;
	int a,b;
	for(a=1;a<n;a++)
	{
		for(b=1;b<n-a+1;b++)
			printf(" ");
		for(b=n+a-1;b>=n-a+1;b--)
			printf("*");
		printf("\n"); 
	}
	for(a=n;a>=1;a--)
	{
		for(b=n-a+1;b>1;b--)
			printf(" ");
		for(b=n-a+1;b<=n+a-1;b++)
			printf("*");
		printf("\n");
	}
 } 
