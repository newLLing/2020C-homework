#include <stdio.h>
#define M 3
#define N 4
void fun(int[][N],int[]);
main()
{
       int tt[M][N]={22,45,56,30,19,33,45,38,20,22,66,40},pp[N],a,b;
       printf("原矩阵为:\n");
       for(a=0;a<=M-1;a++)
       {
              for(b=0;b<=N-1;b++)
                     printf("%d ",tt[a][b]);
              printf("\n");
       }
       fun(tt,pp);
       printf("结果是:\n");
       for(b=0;b<=N-1;b++)
              printf("%d ",pp[b]);
       printf("\n");
       return(0);
}

void fun(int tt[][N],int pp[])
{
       int a,b,min;
       for(b=0;b<=N-1;b++)
       {
              for(a=0;a<=M-1;a++)
              {
                     if(a==0)
                            min=tt[a][b];
                     else 
                            if(tt[a][b]<tt[a-1][b])
                                   min=tt[a][b];
              }
              pp[b]=min;
       }
}
