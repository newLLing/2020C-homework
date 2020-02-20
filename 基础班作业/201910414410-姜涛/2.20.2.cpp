#include"stdio.h"

	void AB(int A[])
	{
		int max, min;
		for (int a = 0;a < 10;a++)
		{
			while (a < 9) {
				if (A[a] >= A[a + 1])
				{
					max = A[a];
					min = A[a + 1];
				}
				else
				{
					max = A[a + 1];
					min = A[a];
				}
			}
		}
		A[0] = min;
		A[9] = max;
	}
	int main()
	{
		int A[10];
		printf("请输入十个整数.....");
		for (int a = 0;a < 10;a++)
		{
			scanf_s("%d", &A[a]);
		}
	AB(A);
	printf("输出交换后的数组：");
		for (int a = 0;a < 10;a++)
		{
			printf("%d", A[a]);
		}
	return 0;
}