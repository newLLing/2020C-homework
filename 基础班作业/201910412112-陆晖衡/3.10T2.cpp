#include<stdio.h>
int main() {
	int a, b, c;
	printf("用户身高输入：英尺，英寸\n");
	scanf_s("%d%d", &a, &b);
	c = (12 * a + b);
	float d;
	d = (c * 0.0254);
	int e;
	printf("用户体重输入:磅\n");
	scanf_s("%d", &e);
	float f;
	f = (1 / 2.2 * e);
	int g;
	g = (f / (d * d));
	printf("用户的BMI值是%d", g);

}