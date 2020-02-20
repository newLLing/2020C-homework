#include<stdio.h>
void swap(int *a,int *b);
void fun(int *p);
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	fun(a);
	return 0;
}
void swap(int *a,int *b)
{
	int t;
	t=*a;*a=*b;*b=t;
}
void fun(int *p)
{
	int max,min,i,m,n;
	max=*p;min=*p;
	for(i=1;i<10;i++)
	{
		if(max<p[i])
		{
			max=p[i];m=i;
		}
		if(min>p[i])
		{
			min=p[i];n=i;
		}
	}
	swap(&p[9],&p[m]);
	swap(&p[0],&p[n]);
	for(i=0;i<10;i++)
	printf("%d",p[i]);
}
