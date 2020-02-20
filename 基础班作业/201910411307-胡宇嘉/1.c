#include <stdio.h>
#define M 3
#define N 4
void fun(int tt[M][N],int pp[N]) 
{
 int i,j,max;
 for(i = 0;i < N;i++) 
 {
 	max = tt[0][i];
 	for(j = 1;j < M;j++)
  	{
 	if(tt[j][i] > max) max = tt[j][i];
 	}
 	pp[i] = max;
 }
}
int main()
{
//	printf("");
	return 0;
}