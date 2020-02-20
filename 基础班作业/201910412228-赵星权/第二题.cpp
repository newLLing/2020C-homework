#include<stdio.h>
#define N 3
void main()
{
	int i, temp;
	int a[3], b[3];
	printf("输入三个数字作为第一个数组:\n");
	for (i = 0;i <= 2;i++)
		scanf("%d", &a[i]);
	printf("输入三个数字作为第二个数组:\n");
	for (i = 0;i <= 2;i++)
		scanf("%d", &b[i]);
	for (i = 0;i <= 2;i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	printf("交换元素之后的第一个数组是:\n");
	for (i = 0;i <= 2;i++)
		printf("%d\t", a[i]);
	printf("\n");
	printf("交换元素之后的第二个数组是:\n");
	for (i = 0;i <= 2;i++)
		printf("%d\t", b[i]);
	printf("\n");
}