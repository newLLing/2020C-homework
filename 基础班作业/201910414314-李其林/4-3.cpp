#include<iostream>
using namespace std;
int main()
{
	const float d=60;
	float degress, minuts, seconds,a;
	cout << "Enter a latitude in degres,minutes and seconds" << endl;
	cout << "First,enter the degress:\b\b\b" << endl;
	cin >> degress;
	cout << "Next,enter the minutes of arc:\b" << endl;
	cin >> minuts;
	cout << "Finally,enter the seconds of arc:\b" << endl;
	cin >> seconds;
	a = degress + minuts / d + seconds / (d*d);
	cout << degress << " degress," << minuts << " minuts," << seconds << " seconds" << "=" << a << "degrees" << endl;
	getchar();
	getchar();
}