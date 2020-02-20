#include<stdio.h>
void change (int a[10]) {
	int max, min, x, y,t;
	min = max = a[0];
	for (int i = 0; i < 10; i++)
	{
		if (min > a[i])
		{
			min = a[i];
			x = i;
		}
		if (max < a[i])
		{
			max = a[i];
			y = i;
		}
	}
	t = a[y]; a[y] = a[9]; a[9] = t; 
	t = a[x]; a[x] = a[0]; a[0] = t; 
	
}
int main()
{
	int arr[10] = { 35,20,94, -23,39, -56,100,87,49,12 };
	
	change(arr);
	for (int i = 0; i < 10; i++)
	{
		printf("%5d", arr[i]);
	}
}