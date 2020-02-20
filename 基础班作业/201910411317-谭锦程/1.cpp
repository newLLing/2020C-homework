#include<iostream>
#define M 4
#define N 4
using namespace std;
void fun(int tt[M][N], int pp[N])
{
	for (int i = 0; i < M; i++)
	{   
		int _max = tt[0][i];
		for(int j=0;j<N;j++)
			if (tt[j][i] > _max)
			{
				_max = tt[j][i];
			}
		pp[i] = _max;
	}
}
int main()
{
	int arr_1[M][N], arr_2[N];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> arr_1[i][j];
	fun(arr_1, arr_2);
	system("pause");
	return 0;
}