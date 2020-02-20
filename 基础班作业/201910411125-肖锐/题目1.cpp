#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#define M 3
#define N 4
void fun(int tt[M][N],int pp[N])
{
  int i,j,min;
      if(tt==NULL || pp==NULL) return;
      for(j=0;j<N;j++)
      {
             min=tt[0][j];
             for(i=0;i<M;i++)
                    if(tt[i][j]<min)
                          min=tt[i][j];
                    pp[j]=min;
      }
}
int main()
{
      int t[M][N]={{68,32,54,12},{14,24,88,58},{42,22,44,56}};
      int p[N],i,j,k;
      
      void NONO ();
      printf("The riginal data is:\n");
      for(i=0;i<M;i++)
      {
             for(j=0;j<N;j++)
                          printf("%6d",t[i][j]);
                    printf("\n");
      }
      fun(t,p);
      printf("\nThe result is:\n");
      for(k=0;k<N;k++)
             printf("%4d",p[k]);
      printf("\n");
      NONO();
      system("pause");
}
void NONO ()
{
   int t[M][N];
      int p[N],i,j,k;
      
      FILE *rf,*wf;
      rf = fopen("in.dat","r");
      wf= fopen("out.dat","w");
      for(j=0;j<5;j++){
             for(i=0;i<M;i++)
         {
             fscanf(rf, "%d,%d,%d,%d",&t[i][0],&t[i][1],&t[i][2],&t[i][3]) ;
             
         }
         i=0;
         fun(t,p);
         for(k=0;k<N;k++)
         {           
           fprintf(wf,"%4d",p[k]);
         }
         fprintf(wf,"\n");
      }
      
      fclose(rf);
   fclose(wf); 
}
