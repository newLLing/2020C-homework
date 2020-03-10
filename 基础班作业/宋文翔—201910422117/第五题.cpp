#include<iostream>
using namespace std;
int main()
{
	cout << "Enter the world's population:";
	long long p;
	cin >> p;
	cout <<"Enter the population of the US:";
	long long up;
	cin >> up;
	cout << "The population of the US is" <<p/up<< "% of the word pouplation";
}