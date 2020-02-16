#include <stdio.h>
void main()
{
	int n=7;
	int i,a,b;
	for(i=1;i<=n;i++)
	{
		for(a=n-1;a>=i;a--)
		{
			printf(" ");
		}
		for(b=1;b<=2*i-1;b++)
		{
			printf("*");
		}
		{
		printf("\n");
		}
	}
	for(i=n-1;i>=1;i--)
	{
		for(a=i;a<=n-1;a++)
		{
			printf(" ");
		}
		for(b=1;b<=2*i-1;b++)
		{
			printf("*");
		}
		printf("\n");
	}
}