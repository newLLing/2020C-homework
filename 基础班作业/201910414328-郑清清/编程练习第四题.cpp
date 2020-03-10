/*4.编写一个程序，要求用户以整数方式输入秒数（使用long或long long变量存储），
然后以天、小时、分钟和秒的方式显示这段时间。使用符号常量来表示每天有多少小时、
每小时有多少分钟以及每分钟有多少秒。该程序的输出应与下面类似：
Enter the number of seconds:31600000
31600000 seconds = 365 days,17 hours,46 minutes,40 seconds
*/
#include<iostream>
using namespace std;
int main()
{
	const int a = 60;
	const int b = 24;
	cout << "Enter the number of seconds:";
	long int seconds;
	cin >> seconds;
	int day = seconds / a / a / b;
	int hour = seconds / a / a - day*b;
	int minutes = seconds / a - day * b * a;
	cout << seconds << "seconds =" << day << "days," << hour << "hours," << minutes << "minutes," << seconds - day * b * a * a << "seconds" << endl;
	return 0;

}