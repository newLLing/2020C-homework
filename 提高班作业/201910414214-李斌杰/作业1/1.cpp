#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//递归实现
int founc(vector<int> array, int start, int end, int num)
{
	if (start > end)
		return 0;
	int temp = start + (end - start) / 2;
	if (array[temp] == num)
		return 1;
	else if (array[temp] > num)
		return founc(array, start, temp - 1, num);
	else
		return founc(array, temp + 1, end, num);


}
// 非递归实现
int founc(vector<int>array, int len, int num)
{
	if (len <= 0)
		return 0;
	int start = 0;
	int end = len - 1;
	while (start <= end)
	{
		int temp = start + (end - start) / 2;
		if (array[temp] == num)
			return 1;
		else if (array[temp] > num)
		{
			end = temp - 1;
		}
		else
			start = temp + 1;
	}

}
int main()
{

	vector<int> arr;
	int number;
	while (1)
	{
		cin >> number;
		arr.push_back(number);
		if (cin.get() == '\n')
			break;
	}
	int len = arr.size();
	int foundNum;
	cin >> foundNum;
	sort(arr.begin(), arr .end());
	if (founc(arr, len, foundNum) == 1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	if (founc(arr, 0, len, foundNum) == 1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	system("pause");
	return 0;
}
