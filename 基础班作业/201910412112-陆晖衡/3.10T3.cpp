#include<stdio.h>
int main() {
	int a, b, c;
	printf("请输入：度\n");
	scanf_s("%d", &a);
	printf("请输入：分\n");
	scanf_s("%d", &b);
	printf("请输入：秒\n");
	scanf_s("%d", &c);
	float d, e, f;
	f = 0.01667;
	d = b + (f * c);
	e = a + (f * d);
	printf("纬度是%f度",e);
}