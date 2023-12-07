#include<stdio.h>
int main()
{
	unsigned long a[100001];	
	int n;
	scanf_s("%d", &n);
	a[1] = 1; a[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	printf("%u", a[n]);
}