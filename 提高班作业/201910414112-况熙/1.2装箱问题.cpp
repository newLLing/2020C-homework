#include<stdio.h>

int v;//箱子体积
int n;//物品个数
int a[31];//存放物品的体积
int dp[10001] = { 0 };//dp[i]表示箱子容积为i时可放入的物品的体积

int main()
{
	int i, j, t;
	printf("请输入箱子的体积:");
	scanf("%d", &v);
	printf("请输入物品的个数:");
	scanf("%d", &n);
	printf("请输入物品的体积:");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++)
	{
		for (j = v; j >= a[i]; j--)
		{
			if (dp[j] > (dp[j - a[i]] + a[i]))
				dp[j] = dp[j];
			else
				dp[j] = dp[j - a[i]] + a[i];
		}
	}
	printf("%d", v - dp[v]);
	return 0;
}
