#include <stdio.h>
#define N 10
void change(int* p)
{
	int temp1, temp2;
	int j = 0;
	int k = 0;
	for (int i = 0; i < N; i++)
	{
		if (*(p + j) < *(p + i))
			j = i;
	}
	temp1 = *(p + 9);
	*(p + 9) = *(p + j);
	*(p + j) = temp1;
	for (int i = 0; i < N; i++)
	{
		if (*(p + k) > * (p + i))
			k = i;
	}
	temp2 = *(p + 0);
	*(p + 0) = *(p + k);
	*(p + k) = temp2;
	return;
}
int main()
{
	int p[N] = { 0 };
	printf("请输入十个数：\n");
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &p[i]);
	}
	change(p);
	for (int i = 0; i < N; i++)
		printf("%d ", p[i]);
	return 0;
}