void swap(int* a, int* b)
int main()
{
	int x[5] = { 0,1,2,3,4 };
	int y[5] = { 5,6,7,8,9 };
	swap(x, y);
	int i;
	for (i = 0; i < 5; i++)
		printf("%d", x[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		printf("%d", y[i]);
	printf("\n");
	return 0;
}

void swap(int* a, int* b)
{
	int  n;
	n = sizeof(a);
	int* temp;
	int i;
	for (i = 0; i <= n; i++)
	{
		temp = a;
		a = b;
		b = temp;
		++a;
		++b;
	}
}