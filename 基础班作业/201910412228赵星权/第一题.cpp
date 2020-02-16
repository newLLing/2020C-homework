#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	c = a + b;
	printf("%d+%d=%d", a, b, c);
	system("pause");
	return 0;
}