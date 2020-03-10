#include<iostream>
using namespace std;
int main()
{
	const int a = 60;
	const int b = 24;
	long seconds,hour,day,min;
	cout << "Enter the number of seconds:\b" << endl;
	cin >> seconds;
	 day = seconds / (a*a*b);
	 seconds -= day * a*a*b;
	 hour = seconds / (a*a);
	 seconds -= hour * a*a;
	 min = seconds / a;
	 seconds -= min * a;
	cout << day << "days," << hour << "hour," << min << "minuts," << seconds <<"seconds" <<endl;

}