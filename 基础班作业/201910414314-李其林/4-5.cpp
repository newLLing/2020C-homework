#include<iostream>
using namespace std;
int main()
{
	long long p,u;
	double a,U,P;
	cout << "Enter the world's population:\b" << endl;
	cin >> p;
	P = (double)p;
	cout << "Enter the population of the US:\b" << endl;
	cin >> u;
	U = (double)u;
	a = ((float)U / (float)P)*100;
	cout << "The population of the US is " << a << "% of the world population\b" << endl;
	
}