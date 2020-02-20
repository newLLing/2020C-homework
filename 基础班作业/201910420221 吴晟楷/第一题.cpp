#include "stdio.h"
#define N 10
#define M 10 
void fun(int tt[M][N],int pp[N]);
int main()
{   int tt[M][N];
    int i,j;
    for(i=0;i<M;i++)
    for(j=0;j<N;j++)
    scanf("%d",tt[M][N]);
    fun(tt[M][N],pp[N]);
    for(j=0;j<N;j++)
    printf("%d",&pp[j]);
    return 0;
 } 
 void fun(int tt[M][N],int pp[N])
 {    int i,j,m,n;
      for(i=0;i<M;i++)
      {   for(j=1;j<M;j++)
          for(m=0;m<M-j;m++)
          if(tt[m]<tt[m+1])
          {  n=tt[m];
             tt[m]=tt[m+1];
             tt[m+1]=n;
		  }printf("%d",&tt[i][M-1]);
	  }    
	         for(i=0;i<M;i++)
	            {
				  for(j=0;j<N;j++)
	             pp[j]=tt[i][j];
	            }
	             for(j=0;j<N;j++)
				 printf("%d",&a[j]);
 }
