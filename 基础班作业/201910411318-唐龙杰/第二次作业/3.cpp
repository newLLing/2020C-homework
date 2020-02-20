#include <stdio.h>
void swap(int *p1,int *p2);
void fun(int *p);
int main()
{
int a[10],i;
printf("Input 10 datas:");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
fun(a);
}
void swap(int *p1,int *p2)
{
int t;
t=*p1;
*p1=*p2;
*p2=t;
}
void fun(int *pa)
{
int max,min,i,m,n;
max=*pa;
min=*pa;
for(i=1;i<10;i++)
{
if(max<pa[i])
{
max=pa[i];
m=i;
}
if(min>pa[i])
{
min=pa[i];
n=i;
}
}
swap(&pa[0],&pa[n]);
swap(&pa[9],&pa[m]);
printf("Output 10 datas:");
for(i=0;i<10;i++)
printf("%d ",pa[i]);
}