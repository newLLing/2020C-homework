#include<stdio.h>
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a[3] = { 1,2,3 };
	int b[3] = { 4,5,6 };
	for (int i = 1; i <= 3; i++) {
		int c = a[i];
			int d = b[i];

		swap(&c,&d );
		printf("%d%d\n", c,d);
	}



}