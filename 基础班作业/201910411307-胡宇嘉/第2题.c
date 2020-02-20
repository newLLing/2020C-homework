#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<8;a++)
	{
		for(b=1;b<8-a;b++)
		{
			printf(" ");
		}
		for(b=1;b<=2*a-1;b++)
	  	{
    	printf("*");
    	}  
    	printf("\n");
    }
    for(a=6;a>0;a--)
    {
    	for(b=1;b<8-a;b++)
		{
			printf(" ");
		}
		for(b=1;b<=2*a-1;b++)
	  	{
    	printf("*");
    	}  
    	printf("\n");
	}
	return 0;
}

