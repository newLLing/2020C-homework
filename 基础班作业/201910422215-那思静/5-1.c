#include<iostream>
using namespace std;
const int inch_feet = 12;
int main()
{
	int inch;
	cout << "please input your height:\n" << endl;
	cin >> inch >> endl;
	cout << "the opposite height is:" << inch / inch_feet << endl;
	return 0;
}