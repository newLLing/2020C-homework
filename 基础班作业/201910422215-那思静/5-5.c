#include<iostream>
using namespace std;
int main()
{
	long long all_people, us_peole;
	cout << "the all_people is:" << endl;
	cin >> all_people >> endl;
	cout << "the us_people is:" << endl;
	cin >> us_people >> endl;
	double percent = double(us_people / all_people);
	cout << "The population of the US is:" << percent <<"%of the world population"<< endl;
	return 0;
}