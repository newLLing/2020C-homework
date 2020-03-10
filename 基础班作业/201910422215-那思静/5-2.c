#include<iostream>
#include<math.h>
using namespace std;
const double inch_feet = 12.0;
const double meters_inch = 0.0254;
const double pounds_kilogram = 2.2;
int main()
{
	double feet, inch, pounds;
	double height, weight, BMI;
	cout << "input your feet inch and pounds:" << endl;
	cin >> feet >> inch >> pounds >> endl;
	height = (feet * inch_feet + inch) * meters_inch;
	weight = pounds / pounds_kilogram;
	BMI = weight / pow(height, 2);
	cout << "the BMI is:" << BMI << endl;
	return 0;
}