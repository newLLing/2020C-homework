#include<stdio.h>
int main() {
	int hight, a;
	
	scanf_s("%d", &hight);
	a = (hight / 12);

	printf("用户身高是%d英寸\n",hight);
	printf("用户身高是%d英尺\n",a);
}