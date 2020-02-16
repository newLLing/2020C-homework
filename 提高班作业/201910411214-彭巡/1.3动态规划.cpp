
#include <iostream>
using namespace std;
int v;//箱子体积 
int n;//个数 
int a[31];  //存放物品的体积 
int dp[20001] = { 0 };  //dp[i]表示箱子容积为i时可放入的物品的体积 ，注意要初始化为0 

int main()
{
	int i, j;
	cin >> v >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];

	for (i = 0; i < n; i++)//外循环，遍历每个箱子 
	{
		for (j = v; j >= a[i]; j--)//内循环，遍历每个容积 
		{
			if (dp[j] > (dp[j - a[i]] + a[i]))
				dp[j] = dp[j];
			else
				dp[j] = dp[j - a[i]] + a[i];  //取最大值，最优解 

		}
	}
	//输出最小的容积 
	cout <<"箱子的剩余空间最小为"<<endl<< v - dp[v] << endl;
	system("pause");
	return 0;
}
