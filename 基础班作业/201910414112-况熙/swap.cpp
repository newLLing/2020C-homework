#include<stdio.h>
void swap(int*, int*);
int main()
{
	int m, n, * p, * q;
	p = &m; q = &n;
	printf("请输入数字m:");
	scanf("%d", &m);
	printf("请输入数字n:");
	scanf("%d", &n);
	swap(p, q);

}

void swap(int* p, int* q)
{
	int* c = p;
	p = q;
	q = c;
	printf("交换后的值为:");
	printf("m=%d n=%d", *p, *q);
}