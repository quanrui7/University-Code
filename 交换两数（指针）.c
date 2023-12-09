#include<stdio.h>
int swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	int x, y;
	scanf_s("%d %d", &x, &y);
	printf("初始值a=%d b=%d\n", x, y);
	swap(&x, &y);                     //运用指针将x，y的地址传到函数
	printf("交换后a=%d b=%d", x, y);
}