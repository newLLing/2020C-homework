#include<stdio.h>
#define N 100
int main()
{
	int n;
	int num[N];int aim; int low,mid,high;
	printf("请输入所输入的数字个数:");
	scanf("%d", &n);
	printf("请输入一行数字:");
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	high = n - 1;
	low = 0;
	printf("请输入要查找的数字:");
	scanf("%d", &aim);
	mid= (low + high) / 2; 
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (aim == num[mid])
			break;
		else if (aim > num[mid])

			low = mid + 1;
		else if (aim < num[mid])

			high = mid - 1;
	}	
		if (low > high)
			printf("no");
		else
			printf("yes");

	return 0;
	


}