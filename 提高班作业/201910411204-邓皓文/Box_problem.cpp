#include <iostream>
using namespace std;


const int N = 10; // 物品最大数量
int Box_volume = 0; // 箱子的体积
int Product_amount = 0; // 物品数量
int Product_volume[N] = { 0 }; // 物品体积
int Product_value[N] = { 0 }; // 物品体积
int SUM[7][25] = { 0 }; // 动态规格表
int product[N] = { -1 }; // 记录物品编号

void GetData()
{
	cout << "箱子的体积为：";
	cin >> Box_volume;
	cout << "物品的数量为：";
	cin >> Product_amount;
	cout << "物品的体积分别为：";
	for (int i = 0; i < Product_amount; i++)
	{
		cin >> Product_volume[i];
		Product_value[i] = Product_volume[i];
	}
}
void get_product(int i, int k, int find_product)
{
	k = 1;

	while (1)
	{
		if (SUM[k][find_product] == find_product)
		{
			product[i] = k - 1;
			find_product = SUM[k][find_product] - Product_value[k-1];
			i++;
			k = 0;
		}
		if (find_product == 0)
		{
			break;
		}
		k++;
	}
}
void Date_processing()
{
	int k = 1; // 记录此时物品的件数
	int w = 1; // 记录此时背包的容量


	for (k = 1; k <= Product_amount; k++)
	{
		for (w = 1; w <= Box_volume; w++)
		{
			if (Product_volume[k - 1] > w)
			{
				SUM[k][w] = SUM[k - 1][w]; // 装不下该物品
			}
			else
			{
				int Getvalue = SUM[k - 1][w - Product_volume[k - 1]] + Product_value[k - 1]; // 装下该物品
				int Passvalue = SUM[k][w] = SUM[k - 1][w]; // 不装该物品
				if (Getvalue > Passvalue)
				{
					SUM[k][w] = Getvalue;
				}
				else
				{
					SUM[k][w] = Passvalue;
				}
			}
		}
	}

	k = 1; // 复原 k 值
	int i = 0; // 物品编号
	int find_product = 0;
	int cnt = 1;
	cout << endl << "最优解的可能情况如下：" << endl << endl;
	for (k; k <= Product_amount; k++)
	{
		
		if (SUM[k][Box_volume] == SUM[Product_amount][Box_volume])
		{
			cout << cnt << ".";
			product[i] = k - 1;
			find_product = SUM[k][Box_volume] - Product_value[k - 1];
			i++;
			get_product(i, k, find_product);

			cout << endl << "*******************************************" << endl << endl;
			cout << "最优解所选物品的体积可能为 ：";
			for (i = 0; product[i] != -1; i++)
			{
				cout << Product_value[product[i]] << "    ";
				product[i] = 0;
			}
			i = 0;
			cout << endl << "此时背包剩余最小空间为：" << Box_volume - SUM[Product_amount][Box_volume] << endl;

			cout << endl << "*******************************************" << endl << endl;
			cnt++;
		}
		
	}

	
	
}



int main()
{
	fill(product, product + N, -1);
	GetData();

	Date_processing();



	return EXIT_SUCCESS;
}