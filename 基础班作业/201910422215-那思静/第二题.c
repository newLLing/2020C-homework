#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line;
	int column;
	line=column=13;
	int i;
	int j;
	for(i=1;i<=line;i++)
	{
		if(i<(line+1)/2+1)
		{
			for(j=1;j<=column;j++)
			{
				if((column+1)/2-(i-1)<=j&&j<=(column+1)/2+(i-1))
				{
					printf("*");
				}
				else{
					printf(" ");
				}
			}
		}
		else{
			for(j=1;j<=column;j++)
			{
				if((column+1)/2-(line-i)<=j&&j<=(column+1)/2+(line-i))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
 } 
 









