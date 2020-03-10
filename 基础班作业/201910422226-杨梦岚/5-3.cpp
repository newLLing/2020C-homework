#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a latitude in degrees,minutes,and seconds:" << endl;
	cout << "First,enter the degrees:";
	int degrees;
	cin >> degrees;

	cout << "Next,enter the minutes of arc:";
	int minutes;
	cin >> minutes;

	cout << "Finally,enter the seconds of arc:";
	int seconds;
	cin >> seconds;
	const double a = 60.0;//一度等于60分
	const double b = 60.0;//一分等于60秒
	double Degrees = degrees + minutes / a + seconds / a / b;
	cout << degrees << "degrees," << minutes << "minutes," << seconds << "seconds=" << Degrees << "degrees" << endl;
	return 0;
	
}