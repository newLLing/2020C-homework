#include <stdio.h>
#define M 3
#define N 4
void fun(int tt[M][N],int pp[N]) {
 int i,j,max;
 for(i = 0;i < N;i++) {
  max = tt[0][i];
  for(j = 1;j < M;j++) {
   if(tt[j][i] > max)
    max = tt[j][i];
  }
  pp[i] = max;
 }
}int main() {
 int t[M][N]={{11, 22, 33,44 },{13, 14, 55, 66},{77, 88, 99, 52}};
 int p[N],i,j,w;
 for(i = 0;i < M;i++) {
  for(j = 0;j < N;j++)
   printf("%d ",t[i][j]);
  printf("\n");
 }
 fun(t,p);
 for(w=0;w<N;w++)
  printf("%d ",p[w]);
 printf("\n");
}
