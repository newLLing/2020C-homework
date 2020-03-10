#include<iostream>
using namespace std;
const double feet_1 = 12.0;
int main()
{
	cout << "请输入你的体重（英寸）：";
	double hight;
	cin >> hight;
	double feet_2 = hight / feet_1;
	cout << "你的体重（英尺）：" << feet_2;
	return 0;
}