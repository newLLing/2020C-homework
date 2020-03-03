#include<iostream>
using namespace std;


int main()
{
	int i, k, num, sum = 0;
	cout << "请输入整数:";
	cin >> num;
	for (i = 1; i <= num / 2; i++)
	{
		for (k = 1;; k++)
		{
			sum = (k = 1) * (2 * i + k) / 2;
			if (sum > num)
				break;
			if (num == sum)
			{
				for (int j = i; j < i + k; j++)
				{
					cout << j << "+";
				}
				cout << i + k << "=" << endl;
			}
		}
	}
	return 0;
}




