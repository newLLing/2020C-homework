#include<stdio.h>
/*运用swap函数，编写函数实现两个数组中对应元素值的交换
*/
void swap(int*, int*);

int main()
{
	int arrayone[4], arraytwo[4];
	printf("Please input the numbers for arrayone :\n");

	for (int i = 0; i < 4; i++)

		scanf_s("%d", &arrayone[i]);

	printf("Please input the numbers for arraytwo :\n");

	for (int j = 0; j < 4; j++)

		scanf_s("%d", &arraytwo[j]);

	swap(&arrayone[0], &arraytwo[0]);

	printf("The result is :");

	for (int i = 0; i < 4; i++) {


		printf("%d", arrayone[i]);
		printf("%d", arraytwo[i]);

	}
}

void swap(int*arrayone, int*arraytwo)
{
	int* x = arrayone, * y = arraytwo;
	int temp;

	for (int k = 0; k < 4; k++) {

		temp = *x; *x = *y; *y = temp;
		*x++; *y++;
	}

}