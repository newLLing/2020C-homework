#include<iostream>

//一英尺等于0.0254米   一千克的2.2磅
using namespace std;
int main(void)
{
	const double a = 12;//定义变量因子
	const double b = 0.0254;
	const double c = 2.2;
	double height_f, height_i, weight_p;//p为英寸 i 为米

	cout << "输入你的身高(以几英尺几英寸的方式):";
	cin >> height_f >> height_i;
	cout << "输入你的体重(以磅为单位):";
	cin >> weight_p;

	double height_meters = height_f * a * b + height_i * b;
	double weight_kg = weight_p * c;
	double BMI = weight_kg / (height_meters * height_meters);

	cout << "你的身高是:" << height_meters << "米 " << "体重是:" << weight_kg << "千克"
		<< " BMI是:" << BMI << endl;
	return 0;

}