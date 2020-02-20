#include <stdio.h>
void exchange(int*a);
void main()
{
	int a[10];
	printf("please input ten fingers:\n");
	for(int i=0;i<10;i++)
	
	scanf("%d",&a[i]); 
	exchange(a);
	printf("\n");
	for(int j=0;j<10;j++)
		
		printf("%d\n",a[j]);
}
void exchange(int*pa)
{

	int*max,*min,*p,t;
	max=min=pa;
	{
	for(p=pa+1;p<pa+10;p++)
	
	{
		if(*p<*min)
		
			min=p;
	}
	}	
	{

		t=pa[0];
		pa[0]=*min;
		*min=t;
			}
	{
	for(p=pa+1;p<pa+10;p++)
			if(*p>*max)
				max=p;
	}
	{
	t=pa[9];
pa[9]=*max;
*max=t;
			}
}






