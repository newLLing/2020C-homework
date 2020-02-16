#include "stdio.h"
void draw(int);
int main()
{   int n;
      scanf("%d",&n);
      draw(n);
      return 0;
}
void draw(int n)
{   int i=0,j=0,a=0,b=0;
    for(i=0;i<n;i++)
    {  for(j=0;i<n-i-1;j++)
    printf(" ");
    for(j=0;j<2*i+1;j++)
    printf("*");
    printf("\n");
	}
	for(i=(n-1)/2;i>=1;i--)
{
for(a=i;a<=n-1;a++)
{
printf(" ");
}
for(b=1;b<=2*i-1;b++)
{
printf("*");
}
printf("\n");
}
getchar();
getchar();
}
