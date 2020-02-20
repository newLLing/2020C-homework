#include "stdio.h"
#define N 10
int main()
{
	int a[N],i,j,max,min,b;
	for(i=0;i<N;i++)
		{
		scanf("%d",a+i);}
	max=min=*a;
	for(j=0;j<N;j++)
		{
		if(*a<*(a+j))
			b=*(a+j);
			*a=b;
			max=b;}
	for(j=0;j<N;j++){
		if(*a>*(a+j))
			b=*(a+j);
			*a=b;
			min=b;
	}			
	printf("max=%d,min=%d",max,min);
	return 0;
}
