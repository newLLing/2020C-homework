#include<iostream>
using namespace std;
int main()
{
	const int h=12;
	const double g=0.0254;
	const double n=2.2;

	int a,b,d;
	double c,e,f;
	cout << "输入英寸，英尺，体重" << endl;
	cout << "输入英寸:" << endl;
	cin >> a;
	cout << "输入英尺:" << endl;
	cin >> b;
	c = ((h * a) + b)*g;
	cout << "输入体重:" << endl;
	cin >> d;
	e = d * n;
	f = e / c;
	cout << f << endl;
	return 0;
}