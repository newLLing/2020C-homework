#include<iostream>
using namespace std;
const seconds_minutes = 60;
const minutes_degrees = 60;
int main()
{
	double degrees, minutes, seconds;
	cout << "First,enter the degrees:" << degrees << endl;
	cin >> degrees >> endl;
	cout << "Next,enter the minutes:" << minutes << endl;
	cin >> minutes >> endl;
	cout << "Finally,enter the seconds:" << seconds << endl;
	cin >> seconds >> endl;
	double result = degrees + minutes / minutes_degrees + seconds / (minutes_degrees * seconds_minutes);
	cout << degrees << "degrees" << minutes << "minutes" << seconds << "seconds" << "=" << result << "degrees" << endl;
		return 0;
}