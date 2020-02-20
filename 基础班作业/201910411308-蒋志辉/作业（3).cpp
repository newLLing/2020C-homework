#include <stdio.h>
int fun1(int* a)
{
	int i;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	return 0;
}
int fun2(int* a)
{
	int* p, * min = a, * max = a, n, m;
	for (p = a; p < a + 10; p++)
	{
		if (*p < *min)min = p;
		if (*p > * max)max = p;
	}
	n = a[0]; a[0] = *min; *min = n;
	m = a[9]; a[9] = *max; *max = m;
	return 0;
}
int fun3(int* a)
{
	int* p;
	for (p = a; p < a + 10; p++)
		printf("%d", *p);
	return 0;
}
int main()
{
	int a[10];
	fun1(a);
	fun2(a);
	fun3(a);

}