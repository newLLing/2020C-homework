#include<stdio.h>
int sum(int a, int b)
{

	return a + b;
}
int main()
{
	int x, y;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	printf("%d", sum(x, y));
	return 0;
}