NO.1
#include<stdio.h>

void fun(int,int);

int main()
{
	int x[M][N],b[N],min;
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		scanf("%d",&x[i][j]);
		
	}
	fun(x,b);
	for(i=0;i<=N-1;i++)
	printf("%d",min[i]);
	printf("%d\n",b[N]);
	return 0;
}




void fun(int tt[M][N],int pp[N])
{
	int i,j,min;
	int k,;
	for(j=0;j<N;j++)
	{
		k=0;
		for(i=0;i<M;i++)
		{
			if(a[i][j]>a[k][j])
			k=i;
		}
		min=a[k][j];
		
	}
	for(i=0;i<=N;i++)
	min[i]=pp[i];
}




NO.2  
#include<stdio.h>

void swap(int *,int *);


int main()
{
	int x,y;
	printf("请输入两个整数：");
	scanf("%d%d",&x,&y);
	swap(&x,&y);
	printf("交换后为：%d %d\n",x,y);
	return 0;
}

void swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}



NO.3
#include<stdio.h>

void input(int number[10]); 
void max_min_value(int array[10]); 
void output(int array[10]); 
void input(int number[10])
{
int i;
printf("请输入十个元素：\n");
for (i=0;i<10;i++)
{
scanf("%d",&number[i]);
}
}
void max_min_value(int array[10])
{
int i,imin,imax,tmp,bg,sm;
imin = imax = array[0];
for (i=0;i<10;i++)
{
if (imax<array[i])
{
imax = array[i];
bg=i;
}
if (imin>array[i])
{
imin = array[i];
sm = i;
}
}
tmp=array[0];
array[0]=array[sm];
array[sm]=tmp;
tmp=array[9];
array[9]=array[bg];
array[bg]=tmp;
}
void output(int array[10])
{
int i;
for (i=0;i<10;i++)
{
printf("%d ",array[i]);
}
printf("\n");
}


int main()
{
int number[10];
input(number);
max_min_value(number);
output(number);
return 0;
}






