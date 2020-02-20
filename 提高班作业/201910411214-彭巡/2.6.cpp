#include <iostream>
using namespace std;
/*
将n看作一个可以变的循环数列
用余数，数组来进行循环的跳转
找规律
1  2  3  4  5  6  7  8  9
如果输入的是
n=9，s=1，m=5
依次淘汰的是
5 1 7 4 3 6 9 2 8



*/

int main()
{
	int n, s, m;
	int a[100];
	cout << "请输入三个数字"<<endl<< "第一个为总共的人数"<<endl<<"第二个为从第几个人开始报数"<<endl<<"第三个为数到第几个让他出局"<<endl;
	cin >> n>>s>>m;
	for (int i = 1; i <= n; i++) 
	{
		a[i] = i;
	}
	while (n>0)
	{
		int y = 0;
		if((s+m-1)%n!=0)
		//s+m-1中间有几个数字
		cout<< a[(s + m - 1) % n]<<endl;
		//余数不为0代表n大，第一次淘汰的就是s+m-1的最后一个数字
		else
		{
			cout << a[n] << endl;
			//余数为0就是最后一个
			y = 1;
		}
		if (!y)
		{
			int z = (s + m - 1) % n;
			for (int i = z; i < n; i++) {
				a[i] = a[i + 1];
				//向前移动
				
			}	//原来的位置的值变为了下一个位置的值
			s = (s + m - 1) % n;
			
		}
		else//将最后一个输出后，重新轮到第一个人报数。
		s = 1;
		n--;		
	}
	system("pause");
	return 0;
}
