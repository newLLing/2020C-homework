#include<stdio.h>
#include<string.h>

void fun(int tt[2][3], int pp[3]) {
	int i, j, key;
	for (int i = 0; i < 3; i++)
	{
		key = tt[0][i];
		for (j = 0; j < 2; j++)
		{
			if (tt[j][i] < key)
			{
				key = tt[j][i];
			}
		}
		pp[i] = key;
	}

}
int main() {
	int tt[2][3] = { { 1,2,3 }, {4, 5, 6} };
	int pp[3];
	fun(tt, pp);
	for (int k = 0; k < 3; k++)
	{
		printf("%d", pp[k]);
	}

}