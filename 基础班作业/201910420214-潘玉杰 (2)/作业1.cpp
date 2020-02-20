   void fun(int tt[M][N]£¬int pp[N]) 
{ 
int i,j; 
for(i=0;i<N;i++); 
      pp[i]=tt[0][i]; 
     for(j=0;j<M£»j++) 
       if(pp[i]>tt[j][i]) 
                 pp[i]=tt[i][j]; 
for(i=0;i<N;i++); 
printf("%d\t",pp[i]); 
}  
