#include <iostream>
void lemon(int arr[]);
using namespace std;
int main(void)
{
	int arr_1[10];
	for (int i = 0; i < 10; i++)
		cin >> arr_1[i];
	lemon(arr_1);
	system("pause");
	return 0;

}
void lemon(int arr[])
{   
	int* p = arr; int k = 0, j = 0;
	int _min, _max;
	_min = _max = *p;
	for (int i = 0; i < 10; i++)
	{
		if (*(p + i) < _min)
		{
			_min = *(p + i);
			k = i;
		}
		if (*(p + i) > _max)
		{
			_max = *(p + j);
			j = i;
		}
	}
	int midden;
	midden = *p; *p = *(p + k); *(p + k) = midden;
	midden = *(p+9); *(p+9) = *(p + j); *(p + j) = midden;
}