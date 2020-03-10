#include<iostream>

//一英尺等于十二英寸    英寸转化为英尺
using namespace std;
int main(void)
{
	const int b = 12;//定义转化因子
	int a;//定义一个身高变量
	cout << "请输入你的身高：__（单位英寸）"  ;
	cin >> a;
	cout << "你的身高是：" << a/12 << "英尺" << endl;

}