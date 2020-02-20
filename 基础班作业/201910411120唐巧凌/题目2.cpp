#include<stdio.h>
#define N 10
int Readscore(int a[N],int b[N]);
void swap(int*x,int*y);
main()
{
int a[N],b[N];
int i,j;
Readscore(a,b);
for(i=0;i<10;i++)
{
swap(&a[i],&b[i]);
}
for(i=0;i<10;i++)
{
printf(" %d",a[i]);
}
printf("\n");
for(j=0;j<10;j++)
{
printf(" %d",b[j]);
}

}
int Readscore(int a[N],int b[N])
{
int i,j;
printf("please input score");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("\n");
for(j=0;j<10;j++)
{
scanf("%d",&b[j]);
}
}
void swap(int*x,int*y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;

}

