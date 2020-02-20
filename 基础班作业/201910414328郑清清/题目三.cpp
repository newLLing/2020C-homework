//从键盘上输入10个整数存放到一维数组中，将其中最小的数与第一个数对换，最大的数与
//最后一个数对换。要求进行数据交换的处理过程编写成一个函数，函数中对数据的处理要
//用指针方法实现。输入数据为：35, 20, 94， - 23, 39， - 56, 100, 87, 49, 12.
#include <stdio.h>
#define N 10
void fun(int x[N],int*);
int main()
{
	int a[N];
	int i, j,*b;
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
		fun(a,b);
	for (i = 0; i < N; i++) {
		printf("%d", b[i]);
	}
	

}
void fun(int a[N],int *b)
{
	int i, j,k,min,max,mindex,maxdex;
	for (i = 0; i < N; i++) {
		min = a[0];
		if (a[i] < min) {
			min = a[i];
		}mindex = i;
		
	}
	j = a[mindex];
	a[mindex] = a[0];
	a[0] = j;
	for (i = 0; i < N; i++) {
		max = a[0];
		if (a[i] > max) {
			max = a[i];
		}maxdex = i;
	}
	k = a[maxdex];
	a[maxdex] = a[N - 1];
	a[N - 1] = k;
	for (i = 0; i < N; i++) {
		*b = a[i];
	}


}