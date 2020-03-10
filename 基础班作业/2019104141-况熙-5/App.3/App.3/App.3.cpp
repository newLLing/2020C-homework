
#include <iostream>
using namespace std;
int main()
{
	
float degrees, minutes, seconds;
cout << "请输入度:";
cin >> degrees;
cout<< "请输入分:";
cin >> minutes;
cout << "请输入秒:";
cin >> seconds;
float sum = degrees + float(minutes / 60) +float( seconds / 3600);
cout << degrees << " degrees," << minutes << " minutes," << seconds << " seconds" << "=" << sum <<" degrees" <<endl;
system("pause");
return 0;
}
