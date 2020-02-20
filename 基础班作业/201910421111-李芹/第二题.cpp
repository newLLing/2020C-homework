#include <stdio.h>
void swap(int*a,int*b);
void main()
{
	int x[]={0,1,2,3,4};
	int y[]={5,6,7,8,9};
swap(x,y);
	for(int i=0;i<5;i++)
		printf("%d",x[i]);
printf("\r\n");

	  for(int k=0;k<5;k++)
	  printf("%d",y[k]);
	 printf("\r\n");

  
}
void swap(int *a,int *b)
{
	int n;
	n=sizeof(a);
	int c;
	int i;
	for(i=0;i<=n;i++)
	{
		c=*a;
		*a=*b;
		*b=c;
		++a;
		++b;
	}
}