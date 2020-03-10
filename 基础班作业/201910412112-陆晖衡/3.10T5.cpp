#include<stdio.h>
int main() {
	long int a, b;
	printf("请输入世界人口：\n");
	scanf_s("%ld", &a);
	printf("请输入中国人口：\n");
	scanf_s("%ld", &b);

	float c;
	c =(float) b / a * 100;

	printf("中国人口占世界人口的%f%%", c);

}