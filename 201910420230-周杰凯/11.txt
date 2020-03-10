#include "iostream"
using namespace std;
const int x = 12;
int main() {
	int height;
	cout << "请输入你的身高：" ;
	cin >> height;
	cout << "你的身高为" << height / x << "英寸" << height % x << "英寸"<<endl;
	return 0;
}