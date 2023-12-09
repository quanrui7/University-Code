#include<stdio.h>
int sushu(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return(0);
	}
	return (1);
}
int main()
{
	for (int i = 1;i<=100;i++)
	{
		if (sushu(i) == 1)
			printf("%d ", i);
	}
}