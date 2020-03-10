#include<iostream>
using namespace std;
int main()
{
	cout << "Enter the world's population :";
	long long world;
	cin >> world;

	cout << "Enter the population of the US:";
	long long US;
	cin >> US;

	cout << "The population of the US is " <<(double)US / (double)world * 100 << "% of the world population." << endl;
	return 0;
}