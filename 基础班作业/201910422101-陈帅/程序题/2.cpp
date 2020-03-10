#include<iostream>
using namespace std;
int main()
{
	int y1, y2, w;
	cout << "请按输入身高" << endl;
	cin >> y1 >> y2;
	cout << "请输入体重" << endl;
	cin >> w;
	double m = (y1 / 12 +(wchar_t) y2) * 0.0254;
	double b = w / 2.2;
	double x= m * m;
	double BMI = b / x;
	cout << "您的体重指数为：" << BMI << endl;
}