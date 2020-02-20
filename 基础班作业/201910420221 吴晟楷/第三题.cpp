#include "stdio.h"
void fun(int *p);
int main()
{   int a[10];
    int i;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    fun(*p,a[10]);
    return 0;
 } 
 void fun(int *p,int a[10])
 {    p=a;
      int m,n,k;
      for(m=1;m<10;m++)
      for(n=0;n<10-m;n++)
      if(a[n]>a[n+1])
      {  k=a[n];
        a[n]=a[n+1];
        a[n+1]=k;
	  }  
	  for(n=0;n<10;n++)
	  printf("%d",*(p+n));      
}
