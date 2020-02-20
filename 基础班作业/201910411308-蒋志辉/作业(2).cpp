#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4,5 };
	int* p = a;
	printf("%d,%d,%d,%d,%d,%d,%d\n", *p, *(++p), (*p++), *p, *p--, --(*p), *p);
	return 0;
}
