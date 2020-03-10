#include<iostream>
using namespace std;
int main(void)
{
	using namespace std;
	long int a;//输入全球人数
	long int b;//输入美国人数
	cout << "请输入美国人的人数：";
	cin >> b;
	cout << "请输入全球的人数";
	cin >> a;
	cout >> "美国人数占全球人数的百分之：" << (100.0*b) / a << "%";
	return 0;
}