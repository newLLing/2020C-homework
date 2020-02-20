//µÚ¶şÌâ
#include"stdio.h"
void swap_array(int *pa,int *pb);
int main()
{
	int x[]={0,1,2,3,4};
	int y[]={5,6,7,8,9};
	swap_array(x,y);
	int i;
	for(i=0;i<5;i++)
		printf("%d",x[i]);
	printf("\r\n",x[i]);
	for(i=0;i<5;i++)
		printf("%d",y[i]);
	scanf("%d",&i);}
void swap_array(int *pa,int *pb)
{
	int n;n= sizeof(pa);
	int c;int i;
	for(i=0;i<=n;i++)
	{
		c=*pa;
		*pa=*pb;
		*pb=c;
		++pa;
		++pb;
	}
}