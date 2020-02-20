#include<stdio.h>
int exchange(int *p,int n);

int main()
{
	int a[10],i;
	printf("输入数组的10个整数\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	exchange(a,10);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
}
int exchange(int *p,int n)
{
	int i,min,max,t=0,temp=0;
	for(min=p[0],i=0;i<n;i++)
	{
		if(p[i]<min)
			{
			min=p[i];
			t=i;
			}
		temp=p[t];
		p[t]=p[0];
		p[0]=temp;
	}
	for(max=p[9],i=0;i<n;i++)
	{
		if(p[i]>max)
			{
			max=p[i];
			t=i;
			}
		temp=p[t];
		p[t]=p[9];
		p[9]=temp;
	}
	return *p;
}



