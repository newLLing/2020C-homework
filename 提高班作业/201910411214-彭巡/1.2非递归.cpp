#include <algorithm>
#include <iostream>
using namespace std;
int fun(int a[], int n,int x) {
	int first = 0;
	int high = n - 1;
	int middle;
	while (first < high)
	{
		middle = (first + high) / 2;
		if (x < a[middle])
		{
			high = middle +1;
		}
		else if (x > a[middle])
		{
			first = middle - 1;
		}
		else
			return middle;
	}
	return 1;
	    
}
int main()
{
	
	int a[100]; 
	int n= 0,x=0,m=0; 
	int temp; 
	char c;
	cout << "输入一串整数中间用空格隔开" << endl;
    cin >> a[n++];
	while ((c = getchar()) != '\n')
	{
		cin >> temp;
		a[n++] = temp;
	}
	sort(a, a + n);
    cout << "输入要查找的数值" << endl;
	cin >> x;
	m= fun(a, n, x);
	//printf("%d", m);
	if (m == x)
	{
		cout << "yes"<<endl;
	}
	else
		cout << "no"<<endl;
	system("pause");
	return 0;
}