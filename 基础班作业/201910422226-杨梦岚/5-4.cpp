#include<iostream>
using namespace std;
int main()
{
	cout << "Enter the number of seconds:";
	long long seconds;
	cin >> seconds;
	const int a = 60;//秒，分
	const int b = 60;//分，小时
	const int c = 24;//小时，天

	int sec = seconds % a;//多少秒
	int min = seconds / a;

	int min1 = min % b;
	int hour = min / b;

	int hour1 = hour % c;
	int day = hour / c;//多少天

	cout << seconds << "seconds=" << day << "day," << hour + hour1 << "hours," << min + min1 << "mintues," << sec << "seconds" << endl;
	return 0;

}