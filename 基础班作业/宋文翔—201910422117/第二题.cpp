#include<iostream>
using namespace std;
int main()
{
	cout << "请输入你的身高（英尺）:";

	double hight;
	cin >> hight;
	cout << "（英寸）:";
	double hight_1;
	cin >> hight_1;
	cout << "请输入你的体重（磅）";
	double weight;
	cin >> weight;
	double hight_m = (hight * 12.0 + hight_1) * 0.0254;
	double weight_k = weight / 2.2;
	double BMI = weight_k / hight_m * hight_m;
	cout << "BIM=" << BMI << endl;
}