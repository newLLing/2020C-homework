No.1
#include<stdio.h>

int main()
{
	int a,b;
	int ba;
	printf("请输入两个整数\n");
	scanf("%d%d",&a,&b);
	ba=a+b;
	printf("相加等于%d",ba);
	
	return 0;
	 
}


No.2
#include<stdio.h>

int main()
{
	int i;
	int a,b;
	for(i=1;i<7;i++)
	{
		for(a=6;a>=i;a--)
		printf(" ");
		for(b=1;b<=2*i-1;b++)
		printf("*");
		printf("\n");
	}
	for(i=7;i>=1;i--)
	{
		for(a=i;a<=6;a++)
		printf(" ");
		for(b=1;b<=2*i-1;b++)
		printf("*");
		printf("\n");
	}
 }

