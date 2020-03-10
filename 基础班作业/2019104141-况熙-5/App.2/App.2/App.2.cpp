#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float height,weight,height1,weight1;
    cout << "请输入升高(英尺.英寸):";
    cin >> height;
    cout << "请输入体重(pond):";
    cin >> weight;
    height1 = height * 0.0254;
    weight1 = weight * float(1 / 2.2);
    float BMI = weight1 / pow(height1, 2);
    cout << "你的BMI值为:" << BMI << endl;
    system("pause");
    return 0;

}

