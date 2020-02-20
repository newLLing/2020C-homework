#include <stdio.h>
#define M 2
#define N 2
int fun(int tt[M][N],int pp[N]); 

int main()
{
	int a[M][N]={{1,2,3},{4,5,6},{7,8,9}};
	int pp[N];
	int n,m;
	int (*tt)[M][N]=a;
	fun((*tt)[M][N],pp[N]);
	for(n=0;n<N;n++)
		printf("%d",pp[N]);
}
int fun(int tt[M][N],int pp[N])
{

    int m,n;
    for(n=0;n<N;n++)
    {
    	pp[n]=tt[0][n]; 
    	for(m=0;m<M;m++)
    	{
        	if(pp[n]>tt[m][n])
            	pp[n]=tt[m][n];
    	}
	}
	return pp[N];

}
