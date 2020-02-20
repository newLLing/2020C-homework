#include <stdio.h>
void change(int*);
int main()
{
	int num[10], i;
	printf("please  input the numbers :\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &num[i]);
	change(num);
	printf("The result is :\n");
	for (int k = 0; k < 10; k++)
		printf("%d ", num[k]);
}
void change(int * num)
{
	int Max = 0, Min = 0,temp1, temp2;
	int big, small;

	for (int i = 0; i < 10; i++)
	{
		if (num[i] >= num[i + 1])
		{
			if (num[i] >= Max)
				Max = num[i];
		}
		else
		{
			if (num[i + 1] >= Max)
				Max = num[i + 1]; big = i + 1;
			if (num[i] <= Min)
				Min = num[i]; small = i;
		}
	}
	temp1 = num[0]; temp2 = num[9];
	num[0] = Min; num[9] = Max;
	num[small] = temp1; num[big] = temp2;
}