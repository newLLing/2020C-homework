#include<iostream>
using namespace std;
int main()
{
	int high;
	cout << "请输入您的身高（英寸）"<<endl;
	cin >> high ;
	const double h = high * 0.083;
	cout << "您的身高为：" << h <<"英尺"<< endl;

} 