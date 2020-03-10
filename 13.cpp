#include<iostream>
using namespace std;
int main(void)
{
	using namespace std;
	const float Degreeto;
	const float Minuteto;
	float degree, minute, second;
	cout << "Enter a latitude in degree,minutes and seconds:";
	cout << endl << "First,enter the degrees:";
	cin >> degree;
	cout << "Next,enter the minutes of arc:";
	cin >> minute;
	cout << "Finally,enter the seconds of arc:";
	cin >> second;
	cout << degree << " degree," << minute << " minutes," << second << " seconds = " << degree + (minute + second / Minuteto) / Degree<< " degrees";
	return 0;
}