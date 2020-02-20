#include<stdio.h>
void main()
{
	int i, temp;
	int a[5], b[5];
	printf("输入五个数字作为第一个数组:\n");
	for (i = 0; i <= 4; i++)
		scanf_s("%d", &a[i]);
	printf("输入五个数字作为第二个数组:\n");
	for (i = 0; i <= 4; i++)
		scanf_s("%d", &b[i]);
	for (i = 0; i <= 4; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	printf("交换元素之后的第一个数组是:\n");
	for (i = 0; i <= 4; i++)
		printf("%d\t", a[i]);
	printf("\n");
	printf("交换元素之后的第二个数组是:\n");
	for (i = 0; i <= 4; i++)
		printf("%d\t", b[i]);
	printf("\n");
}