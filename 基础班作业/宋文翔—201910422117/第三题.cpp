#include<iostream>
using namespace std;
int main()
{
	cout << "Enter a latitude in degree,minutes,and secords:" << endl;
	cout << "Frist,enter the degree:";
	int degrees;
	cin >> degrees;
	cout << "Next£¬enter the miuntes of atc:";
	int minutes;
	cin >> minutes;
	cout << "Finally,enter the seconds of atc:";
	int seconds;
	cin >> seconds;
	double degree = degrees + minutes / 60.0 + seconds / 60.0 * 60.0;
	cout << degrees << "degrees" << minutes << "minutes" << seconds << "seconds";
}