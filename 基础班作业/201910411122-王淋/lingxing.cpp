#include<stdio.h>
int main()

{
	int i,j,a;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=5-i;j++){
		  printf(" ");	
		} 
		  for(a=1;a<=2*i-1;a++){
		  	 printf("*");
		  }
		 	 printf("\n");
	}
	for(i=5;i>0;i--)
	{
		for(j=6-i;j>0;j--){
		printf(" ");
	}
		for(a=2*i-1;a>0;a--)
		{
		  printf("*");
		}
		{
		  printf("\n");
		}
	}
}
