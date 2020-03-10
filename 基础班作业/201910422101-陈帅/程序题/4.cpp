#include<iostream>
using namespace std;
int main()
{
	cout << "Enter the number of seconds :" ;
	long long seconds;
	cin >> seconds;
	cout << seconds << "seconds=" << seconds / 86400 << "days," << seconds % 86400/3600 << "hours," << seconds % 86400 % 3600/60 << "minutes," << seconds % 86400 % 3600 / 60 %60 << "seconds" << endl;
}