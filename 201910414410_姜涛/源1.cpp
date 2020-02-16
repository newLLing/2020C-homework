#include"stdio.h"
int main()
{
	int a, b,sum;
	printf("请输入俩个数：")
	scanf_s("%d%d", &a, &b);
	sum = a + b;
	printf("这两个数的和为：%d", sum);
	return 0;
}