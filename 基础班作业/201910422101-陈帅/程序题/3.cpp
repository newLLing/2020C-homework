#include<iostream>
using namespace std;

int main()
{
	cout << "Enter a latitude in degrees,minutes,and seconds:" << endl;
	int degrees, minutes, seconds;
	cout << "First,enter the degrees:";
	cin >> degrees;
	cout << "Next,enter the minutes of arc:";
	cin >> minutes;
	cout << "Finally,enter the seconds of arc:";
	cin >> seconds;
	double key =degrees + minutes / 60 + seconds / 3600;
	cout << degrees << "degrees," << minutes << "minutes," << seconds << "seconds=" << key << "degrees" << endl;
}
