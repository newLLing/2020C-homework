#include<iostream>

using namespace std;

int main()
{

	int v;
	cin >> v;
	int n;
	cin >> n;
	int w[100];
	int dp[1000] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = v; j >= w[i]; j--)
		{
			if (dp[j] < (dp[j - w[i]] + w[i]))
				dp[j] = dp[j - w[i]] + w[i];
		}

	}
	cout << v - dp[v] << endl;
	system("pause");
	return 0;
}