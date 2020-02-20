#include "stdio.h"
#include "string.h"
void swap(int a[100],int b[100])
 {   int i,j,k;
     k=a[i];
     a[i]=b[j];
     b[j]=k;
 }
int main()
{   int a[100],b[100];
    int i,j;
    printf("请输入第一个数组");
    for(i=0;i<100;i++)
    scanf("%d",a[i]);
    printf("请输入第二个数组");
    for(j=0;j<100;j++)
    scanf("%d",b[j]);
    for(i=0;i<100;i++)
    {
	for(j=0;j<100;j++)
	swap(int a[i],int b[j]);
    }
    for(i=0;i<100;i++)
    printf("%d",a[i]);
    for(j=0;j<100;j++)
    printf("%d",b[j]);
    return 0;
 } 

     
 
