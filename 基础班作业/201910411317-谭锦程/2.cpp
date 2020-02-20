#include <iostream>
#define SIZE 4
using namespace std;
void swap(int arr_1[SIZE], int arr_2[SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		int midden = arr_1[i];
		arr_1[i] = arr_2[i];
		arr_2[i] = midden;
	}
}
int main(void)
{
	int arr_1[SIZE]; int arr_2[SIZE];
	cout << "please input your number1:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr_1[i];
	}
	cout << "please input your number2:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr_2[i];
	}
	swap(arr_1,arr_2);
	system("pause");
	return 0;
}