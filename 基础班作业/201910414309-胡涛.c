//第二题 
#include<stdio.h>
int main()
{
	int height,length,floor,n,m;
	height=7;
	for(floor=0;floor<height+1;floor++)
	{
		for(n=0;n<height-floor;n++)
		{
			printf(" ");
		}
		for(length=0;length<2*floor-1;length++)
		{
			printf("*");
		}
		for(n=0;n<height-floor;n++)
		{
			printf(" ");
		}
		printf("\n");
	}
	for(floor=height-1;floor>0;floor--)
	{
		for(n=0;n<height-floor;n++)
		{
			printf(" ");
		}
		for(length=0;length<2*floor-1;length++)
		{
			printf("*");
		}
		for(n=0;n<height-floor;n++)
		{
			printf(" ");
		}
		printf("\n");
	}
}
//第一题 
#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d %d",&i,&j);
	printf("%d",i+j);
}
