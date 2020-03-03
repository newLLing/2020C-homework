void func(int a[], int number, int size,int end)
{
	int count = 0;
	int i = size;
	int j = 0;
	while (size > 1)
	{
		for (j = 0; j <= i; j++)
		{
			if (count == number && a[i] != 0)
			{
				a[j] = 0;
				size--;
				count = 0;
			}
			if (count == end)   count = 0;
			count++;
		}
	}

}