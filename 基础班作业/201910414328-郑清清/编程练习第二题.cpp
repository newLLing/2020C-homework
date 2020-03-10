/*2.编写一个程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。（使用
3个变量来存储这些信息。）该程序报告其BMI（Body Mass Index ,体重指数）。为了计算BMI，
该程序以英寸的方式指出用户的身高（一英尺为十二英寸），并将以英寸为单位的身高身高转换
为以米为单位的身高（1英寸=0.0254米）。然后，将以磅为单位的体重转换为千克为单位的体重
（1千克=2.2磅）。最后，计算相应的BMI-体重（千克）除以身高（米）的平方。用符号常量表示
各种转换因子。*/
/*#include<iostream>
using namespace std;
int main()
{
	const int a = 12;
	const double b = 0.0254;
	const double c = 2.2;
	double feet;//英尺
	double inch;//英寸
	double pount;//磅
	cout << "请输入您的身高(英尺英寸):" << endl;
	cin >> feet >> inch;
	cout << "请输入您的体重（磅）:" << endl;
	cin >> pount;
	double height = (feet * a + inch) * b;
	double weight = pount * c;
	double BMI = weight / (height * height);
	cout << "您身体的BMI值为" << BMI << endl;
	return 0;
}*/