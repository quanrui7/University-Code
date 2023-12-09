#include<stdio.h>
int k = 0, n;
void mov(int n, char a, char c, char b)
{
	if (n == 0)return;
	mov(n - 1, a, b, c);
	k++;
	printf("%d:from %c-->%c\n", k,a,c);
	mov(n - 1, b, c, a);
}
int main()
{
	printf("n=");
	scanf_s("%d", &n);
	mov(n, 'a', 'c', 'b');
	return 0;
}