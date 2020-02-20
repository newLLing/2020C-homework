#include <stdio.h>
void fun(int tt[][3],int pp[]);
void main()
{
	int tt[3][3]={1,2,3,4,5,6,7,8,9 };
	int pp[3];
	fun(tt[3][3],pp[3]);
		for(int j=0;j<3;j++)
			printf("%d",pp[j]);

}
void fun(int tt[m][3],int pp[])
{

	for(int a=0;a<m;a++)
	{
		for(int b=0;b<2;b++)
		{
		int temp=tt[b][a];
		if(tt[b][a]>tt[b+1][a])
			temp=tt[b+1][a];
		int c=0;
			pp[c]=temp;
	c++;
		}
}