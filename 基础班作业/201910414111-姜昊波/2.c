#include <stdio.h>
void swap(int *a,int *b); 

int main()
{
	int a=3,b=4;
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
 } 
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
	return;
}
