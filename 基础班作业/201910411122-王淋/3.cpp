#include<stdio.h>
int main()
{void input();
printf("ÇëÊäÈë10¸öÊı×Ö:"); 
input();
return 0;
}
void input()
{
    void wl(int b[],int n);
     int i,a[10];
     for(i=0;i<10;i++)
     scanf("%d",&a[i]);
      for(i=0;i<10;i++)
      printf("%d",a[i]);
      printf("\n");
wl(a,10);
}
void wl(int b[],int n)
{
    void output(int c[],int m);
         int t,*p,*end,*min,*max;
      p=b;
      end=p+n;
      min=max=b;
   for(p=b;p<end;p++)
 {       
       if(*p>*max)
         max=p;
 }
for(p=&b[0];p<end;p++)
{  
      if(*p<*min)
        min=p;
}
    if(*max!=b[0]||*min!=b[9])
{      
        t=*max;
        *max=b[9];
       b[9]=t;
       t=*min;
        *min=b[0];
       b[0]=t;}
  else
{      
      t=*max;
      *max=*min;
      *min=t;}
      output(b,10);
}
  void output(int c[],int m)
{
      int j;
       for(j=0;j<m;j++)
         printf("%d",c[j]);
       printf("\n");
}
