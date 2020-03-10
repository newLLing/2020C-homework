#include "iostream"
using namespace std;
int main() {
	int inch,feet,weight;
	cout << "请输入你的身高：";
	cin >> inch >> feet;
	cout << "请输入你的体重";
	cin >> weight;
	cout << "你的身高为" << inch<< "英寸" << feet << "英尺" <<weight<<"磅"<< endl;
	return 0;
}