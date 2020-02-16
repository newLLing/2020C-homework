#include<stdio.h>
int sum(int a, int b)
{

	return a + b;
}
int main()
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	printf("%d", sum(x, y));
	return 0;
}
