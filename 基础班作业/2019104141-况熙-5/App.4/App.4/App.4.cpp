#include <iostream>
using namespace std;
int main()
{
	int days, hours,minutes;
	unsigned long long seconds;
	cout << "请输入有多少秒:";
	cin >> seconds;
	minutes = seconds / 60;
	hours = minutes / 60;
	days = hours / 24;
	seconds = seconds % 60;
	minutes = minutes % 60;
	hours = hours % 60;
	cout << days << " days," << hours << " hours," << minutes << " minutes," << seconds << " seconds"; << endl;
	system("pause");
	return 0;
	
}

